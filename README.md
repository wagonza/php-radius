# RADIUS

This is the source code for the PHP RADIUS extension.

[![Build Status](https://travis-ci.org/LawnGnome/php-radius.svg?branch=master)](https://travis-ci.org/LawnGnome/php-radius)

## Installation

### Via PECL

You can install the extension through PECL:

```sh
pecl install radius
```

For more information on using PECL, please see
[the PHP manual](http://php.net/manual/en/install.pecl.php).

### From source

As this extension is self contained, you can build it very easily, provided you
have a PHP build environment:

```sh
phpize
./configure
make
sudo make install
echo extension=radius.so | sudo tee -a $(php --ini | head -1 | cut -d: -f 2- | cut -c 2-)/php.ini
```

You can also run the test suite with `make test`.

### Rocky Linux 9 / PHP 8.5 RPM

The repository includes an RPM spec and GitHub Actions workflow for Rocky Linux
9 with Remi’s PHP 8.5 module stream. The workflow builds the extension
and uploads the binary and source RPMs as the
`php-radius-rocky-9-php85-rpm` workflow artifact.

Before installing the RPM, enable the same Remi PHP module stream on the target
machine so DNF can resolve the PHP 8.5 runtime dependency:

```sh
sudo dnf install -y https://rpms.remirepo.net/enterprise/remi-release-9.rpm
sudo dnf module reset php -y
sudo dnf module enable php:remi-8.5 -y
sudo dnf install -y php-common
sudo dnf install -y ./php-radius-1.4.0b2-3.el9.x86_64.rpm
```

To build locally on Rocky Linux 9, enable Remi’s PHP 8.5 module stream, then
install `php-devel`, `gcc`, `make`, and
`rpm-build`, place a source archive named
`radius-1.4.0b2.tar.gz` in your RPM `SOURCES` directory, and run:

```sh
rpmbuild -ba packaging/rpm/php-radius.spec
```

## Usage

[The PHP manual includes a section on this extension.](http://php.net/radius)

## Contributing

Pull requests and bug reports are most welcome through GitHub.
