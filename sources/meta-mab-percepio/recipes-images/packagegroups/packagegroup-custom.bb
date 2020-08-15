DESCRIPTION = "Custom recipes to support Percepio Tracealyzer"
LICENSE = "MIT"

inherit packagegroup

RDEPENDS_${PN} = " \
    lttng-modules \
    lttng-tools \
    lttng-ust \
    babeltrace \
"
