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
9 with PHP 8.5. The workflow builds the extension and uploads the binary and
source RPMs as the `php-radius-rocky-9-rpm` workflow artifact.

To build locally on Rocky Linux 9, enable PHP 8.5 from the Remi repository,
then install `php-devel`, `gcc`, `make`, and
`rpm-build`, place a source archive named
`radius-1.4.0b2.tar.gz` in your RPM `SOURCES` directory, and run:

```sh
rpmbuild -ba packaging/rpm/php-radius.spec
```

## Usage

[The PHP manual includes a section on this extension.](http://php.net/radius)

## Contributing

Pull requests and bug reports are most welcome through GitHub.
