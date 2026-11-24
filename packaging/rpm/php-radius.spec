Name:           php-radius
Version:        1.4.0b2
Release:        2%{?dist}
Summary:        PHP RADIUS client extension

%global php_scl_root   /opt/remi/php85/root
%global php_scl_bindir %{php_scl_root}/usr/bin
%global php_scl_extdir %{php_scl_root}/usr/lib64/php/modules
%global php_scl_inidir /etc/opt/remi/php85/php.d

License:        BSD
URL:            https://github.com/LawnGnome/php-radius
Source0:        radius-%{version}.tar.gz

BuildRequires:  gcc
BuildRequires:  make
BuildRequires:  php85-php-devel >= 8.5
BuildRequires:  rpm-build
Requires:       php85-php-common%{?_isa} >= 8.5

%description
The radius extension provides PHP bindings for RADIUS authentication,
accounting, change-of-authorization, and disconnect requests.

%prep
%setup -q -n radius-%{version}

%build
%{php_scl_bindir}/phpize
%configure --with-php-config=%{php_scl_bindir}/php-config --enable-radius
%make_build

%install
rm -rf %{buildroot}

install -Dpm 0755 modules/radius.so %{buildroot}%{php_scl_extdir}/radius.so
install -Dpm 0644 packaging/rpm/radius.ini %{buildroot}%{php_scl_inidir}/40-radius.ini
install -Dpm 0644 radius.conf %{buildroot}%{_sysconfdir}/radius.conf

%check
%{php_scl_bindir}/php -n -d extension=%{buildroot}%{php_scl_extdir}/radius.so \
    -r 'exit(extension_loaded("radius") ? 0 : 1);'

%files
%license LICENSE
%doc CREDITS README.md examples
%config(noreplace) %{_sysconfdir}/radius.conf
%config(noreplace) %{php_scl_inidir}/40-radius.ini
%{php_scl_extdir}/radius.so

%changelog
* Tue Nov 24 2026 PHP Radius Maintainers <maintainers@example.com> - 1.4.0b2-3
- Package the extension for Remi's PHP 8.5 Software Collection.

* Tue Nov 24 2026 PHP Radius Maintainers <maintainers@example.com> - 1.4.0b2-2
- Fix compilation with PHP 8.5 after removal of ext/standard/php_rand.h.

* Tue Nov 24 2026 PHP Radius Maintainers <maintainers@example.com> - 1.4.0b2-1
- Build the PHP RADIUS extension for Rocky Linux 9 with PHP 8.5.
