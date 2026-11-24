Name:           php-radius
Version:        1.4.0b2
Release:        3%{?dist}
Summary:        PHP RADIUS client extension

License:        BSD
URL:            https://github.com/LawnGnome/php-radius
Source0:        radius-%{version}.tar.gz

BuildRequires:  gcc
BuildRequires:  make
BuildRequires:  php-devel >= 8.5
BuildRequires:  rpm-build
Requires:       php-common%{?_isa} >= 8.5

%description
The radius extension provides PHP bindings for RADIUS authentication,
accounting, change-of-authorization, and disconnect requests.

%prep
%setup -q -n radius-%{version}

%build
phpize
%configure --enable-radius
%make_build

%install
rm -rf %{buildroot}

install -Dpm 0755 modules/radius.so %{buildroot}%{php_extdir}/radius.so
install -Dpm 0644 packaging/rpm/radius.ini %{buildroot}%{php_inidir}/40-radius.ini
install -Dpm 0644 radius.conf %{buildroot}%{_sysconfdir}/radius.conf

%check
php -n -d extension=%{buildroot}%{php_extdir}/radius.so \
    -r 'exit(extension_loaded("radius") ? 0 : 1);'

%files
%license LICENSE
%doc CREDITS README.md examples
%config(noreplace) %{_sysconfdir}/radius.conf
%config(noreplace) %{php_inidir}/40-radius.ini
%{php_extdir}/radius.so

%changelog
* Tue Nov 24 2026 PHP Radius Maintainers <maintainers@example.com> - 1.4.0b2-3
- Package the extension for Remi's PHP 8.5 module stream.

* Tue Nov 24 2026 PHP Radius Maintainers <maintainers@example.com> - 1.4.0b2-2
- Fix compilation with PHP 8.5 after removal of ext/standard/php_rand.h.

* Tue Nov 24 2026 PHP Radius Maintainers <maintainers@example.com> - 1.4.0b2-1
- Build the PHP RADIUS extension for Rocky Linux 9 with PHP 8.5.
