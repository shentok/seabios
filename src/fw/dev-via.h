#ifndef __DEV_VIA_H
#define __DEV_VIA_H

#define VIA_PMREGCFG1            0x41
#define VIA_PMREGINTSEL          0x42
#define VIA_PMBASE               0x48
#define VIA_SMBHSTBASE           0x90
#define VIA_SMBHSTCFG            0xd2

#define VIA_PMIO_GBLEN           0x2a
#define VIA_PMIO_GBLEN_SW_SMI_EN (1 << 6)
#define VIA_PMIO_GLBCTL          0x2c
#define VIA_PMIO_GLBCTL_SMI_EN   1
#define VIA_PMIO_GBLCTL_SMIIG    (1 << 4)

#endif // dev-via.h
