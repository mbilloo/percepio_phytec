# Copyright (C) 2012-2016 O.S. Systems Software LTDA.
# Copyright (C) 2013-2018 Martin Jansa <martin.jansa@gmail.com>

QT_MODULE ?= "${BPN}"
# branch named 5.10.1 got deleted upstream, but v5.10.1 tag still exists on 5.11 branch
QT_MODULE_BRANCH ?= "5.11"
QT_MODULE_BRANCH_PARAM ?= "branch=${QT_MODULE_BRANCH}"

# each module needs to define valid SRCREV
SRC_URI = " \
    ${QT_GIT}/${QT_MODULE}.git;name=${QT_MODULE};${QT_MODULE_BRANCH_PARAM};protocol=${QT_GIT_PROTOCOL} \
"

CVE_PRODUCT = "qt"

S = "${WORKDIR}/git"

PV = "5.10.1+git${SRCPV}"