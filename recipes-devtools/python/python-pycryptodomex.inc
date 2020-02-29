SUMMARY = "Cryptographic library for Python"
DESCRIPTION = "PyCryptodomex is a self-contained Python package of low-level\
 cryptographic primitives."
HOMEPAGE = "http://www.pycryptodome.org"
LICENSE = "PD & BSD-2-Clause"
LIC_FILES_CHKSUM = "file://LICENSE.rst;md5=6dc0e2a13d2f25d6f123c434b761faba"

#SRC_URI[md5sum] = "7a29c89648b52dc00f41817bee688f87"
#SRC_URI[sha256sum] = "57e48e137758912a6cf778f24bb7bd77a2ac509d1e544181912c8c10c14b84e8"
SRC_URI[md5sum] = "d755d7bae113d66dba3eb77b022c336e"
SRC_URI[sha256sum] = "e50b15af6bbdc6b5f8bd70d818cb846b15303ffa6c371b799db561a403a21607"

inherit pypi

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-math \
"

RDEPENDS_${PN}-tests += " \
    ${PYTHON_PN}-unittest \
"

PACKAGES =+ "${PN}-tests"

FILES_${PN}-tests += " \
    ${PYTHON_SITEPACKAGES_DIR}/Cryptodome/SelfTest/ \
    ${PYTHON_SITEPACKAGES_DIR}/Cryptodome/SelfTest/__pycache__/ \
"

BBCLASSEXTEND = "native nativesdk"
