#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.resources"), aligned (8)))
#else
# define SECTION
#endif

#ifdef _MSC_VER
static const SECTION union { const guint8 data[3241]; const double alignment; void * const ptr;}  resources_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0254, 0000, 0000, 0000, 0000, 0000, 0000, 0050, 0005, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0004, 0000, 0000, 0000, 0004, 0000, 0000, 0000, 0004, 0000, 0000, 0000, 
  0004, 0000, 0000, 0000, 0312, 0053, 0334, 0151, 0004, 0000, 0000, 0000, 0254, 0000, 0000, 0000, 
  0005, 0000, 0114, 0000, 0264, 0000, 0000, 0000, 0270, 0000, 0000, 0000, 0113, 0120, 0220, 0013, 
  0003, 0000, 0000, 0000, 0270, 0000, 0000, 0000, 0004, 0000, 0114, 0000, 0274, 0000, 0000, 0000, 
  0300, 0000, 0000, 0000, 0336, 0123, 0043, 0303, 0000, 0000, 0000, 0000, 0300, 0000, 0000, 0000, 
  0014, 0000, 0166, 0000, 0320, 0000, 0000, 0000, 0224, 0014, 0000, 0000, 0324, 0265, 0002, 0000, 
  0377, 0377, 0377, 0377, 0224, 0014, 0000, 0000, 0001, 0000, 0114, 0000, 0230, 0014, 0000, 0000, 
  0234, 0014, 0000, 0000, 0341, 0031, 0343, 0076, 0001, 0000, 0000, 0000, 0234, 0014, 0000, 0000, 
  0006, 0000, 0114, 0000, 0244, 0014, 0000, 0000, 0250, 0014, 0000, 0000, 0144, 0141, 0164, 0141, 
  0057, 0000, 0000, 0000, 0002, 0000, 0000, 0000, 0157, 0162, 0147, 0057, 0004, 0000, 0000, 0000, 
  0155, 0171, 0055, 0151, 0155, 0141, 0147, 0145, 0056, 0163, 0166, 0147, 0000, 0000, 0000, 0000, 
  0264, 0013, 0000, 0000, 0000, 0000, 0000, 0000, 0074, 0077, 0170, 0155, 0154, 0040, 0166, 0145, 
  0162, 0163, 0151, 0157, 0156, 0075, 0042, 0061, 0056, 0060, 0042, 0040, 0145, 0156, 0143, 0157, 
  0144, 0151, 0156, 0147, 0075, 0042, 0125, 0124, 0106, 0055, 0070, 0042, 0040, 0163, 0164, 0141, 
  0156, 0144, 0141, 0154, 0157, 0156, 0145, 0075, 0042, 0156, 0157, 0042, 0077, 0076, 0012, 0074, 
  0163, 0166, 0147, 0012, 0040, 0040, 0040, 0170, 0155, 0154, 0156, 0163, 0072, 0144, 0143, 0075, 
  0042, 0150, 0164, 0164, 0160, 0072, 0057, 0057, 0160, 0165, 0162, 0154, 0056, 0157, 0162, 0147, 
  0057, 0144, 0143, 0057, 0145, 0154, 0145, 0155, 0145, 0156, 0164, 0163, 0057, 0061, 0056, 0061, 
  0057, 0042, 0012, 0040, 0040, 0040, 0170, 0155, 0154, 0156, 0163, 0072, 0143, 0143, 0075, 0042, 
  0150, 0164, 0164, 0160, 0072, 0057, 0057, 0143, 0162, 0145, 0141, 0164, 0151, 0166, 0145, 0143, 
  0157, 0155, 0155, 0157, 0156, 0163, 0056, 0157, 0162, 0147, 0057, 0156, 0163, 0043, 0042, 0012, 
  0040, 0040, 0040, 0170, 0155, 0154, 0156, 0163, 0072, 0162, 0144, 0146, 0075, 0042, 0150, 0164, 
  0164, 0160, 0072, 0057, 0057, 0167, 0167, 0167, 0056, 0167, 0063, 0056, 0157, 0162, 0147, 0057, 
  0061, 0071, 0071, 0071, 0057, 0060, 0062, 0057, 0062, 0062, 0055, 0162, 0144, 0146, 0055, 0163, 
  0171, 0156, 0164, 0141, 0170, 0055, 0156, 0163, 0043, 0042, 0012, 0040, 0040, 0040, 0170, 0155, 
  0154, 0156, 0163, 0072, 0163, 0166, 0147, 0075, 0042, 0150, 0164, 0164, 0160, 0072, 0057, 0057, 
  0167, 0167, 0167, 0056, 0167, 0063, 0056, 0157, 0162, 0147, 0057, 0062, 0060, 0060, 0060, 0057, 
  0163, 0166, 0147, 0042, 0012, 0040, 0040, 0040, 0170, 0155, 0154, 0156, 0163, 0075, 0042, 0150, 
  0164, 0164, 0160, 0072, 0057, 0057, 0167, 0167, 0167, 0056, 0167, 0063, 0056, 0157, 0162, 0147, 
  0057, 0062, 0060, 0060, 0060, 0057, 0163, 0166, 0147, 0042, 0012, 0040, 0040, 0040, 0170, 0155, 
  0154, 0156, 0163, 0072, 0163, 0157, 0144, 0151, 0160, 0157, 0144, 0151, 0075, 0042, 0150, 0164, 
  0164, 0160, 0072, 0057, 0057, 0163, 0157, 0144, 0151, 0160, 0157, 0144, 0151, 0056, 0163, 0157, 
  0165, 0162, 0143, 0145, 0146, 0157, 0162, 0147, 0145, 0056, 0156, 0145, 0164, 0057, 0104, 0124, 
  0104, 0057, 0163, 0157, 0144, 0151, 0160, 0157, 0144, 0151, 0055, 0060, 0056, 0144, 0164, 0144, 
  0042, 0012, 0040, 0040, 0040, 0170, 0155, 0154, 0156, 0163, 0072, 0151, 0156, 0153, 0163, 0143, 
  0141, 0160, 0145, 0075, 0042, 0150, 0164, 0164, 0160, 0072, 0057, 0057, 0167, 0167, 0167, 0056, 
  0151, 0156, 0153, 0163, 0143, 0141, 0160, 0145, 0056, 0157, 0162, 0147, 0057, 0156, 0141, 0155, 
  0145, 0163, 0160, 0141, 0143, 0145, 0163, 0057, 0151, 0156, 0153, 0163, 0143, 0141, 0160, 0145, 
  0042, 0012, 0040, 0040, 0040, 0167, 0151, 0144, 0164, 0150, 0075, 0042, 0063, 0062, 0042, 0012, 
  0040, 0040, 0040, 0150, 0145, 0151, 0147, 0150, 0164, 0075, 0042, 0063, 0062, 0042, 0012, 0040, 
  0040, 0040, 0166, 0151, 0145, 0167, 0102, 0157, 0170, 0075, 0042, 0060, 0040, 0060, 0040, 0062, 
  0060, 0071, 0056, 0070, 0071, 0060, 0065, 0065, 0040, 0062, 0062, 0066, 0056, 0060, 0062, 0062, 
  0067, 0071, 0042, 0012, 0040, 0040, 0040, 0166, 0145, 0162, 0163, 0151, 0157, 0156, 0075, 0042, 
  0061, 0056, 0061, 0042, 0012, 0040, 0040, 0040, 0151, 0144, 0075, 0042, 0163, 0166, 0147, 0070, 
  0042, 0012, 0040, 0040, 0040, 0151, 0156, 0153, 0163, 0143, 0141, 0160, 0145, 0072, 0166, 0145, 
  0162, 0163, 0151, 0157, 0156, 0075, 0042, 0061, 0056, 0060, 0056, 0062, 0040, 0050, 0145, 0070, 
  0066, 0143, 0070, 0067, 0060, 0070, 0067, 0071, 0054, 0040, 0062, 0060, 0062, 0061, 0055, 0060, 
  0061, 0055, 0061, 0065, 0051, 0042, 0012, 0040, 0040, 0040, 0163, 0157, 0144, 0151, 0160, 0157, 
  0144, 0151, 0072, 0144, 0157, 0143, 0156, 0141, 0155, 0145, 0075, 0042, 0141, 0141, 0141, 0141, 
  0055, 0163, 0171, 0155, 0142, 0157, 0154, 0151, 0143, 0056, 0163, 0166, 0147, 0042, 0012, 0040, 
  0040, 0040, 0163, 0164, 0171, 0154, 0145, 0075, 0042, 0145, 0156, 0141, 0142, 0154, 0145, 0055, 
  0142, 0141, 0143, 0153, 0147, 0162, 0157, 0165, 0156, 0144, 0072, 0156, 0145, 0167, 0042, 0076, 
  0012, 0040, 0040, 0074, 0144, 0145, 0146, 0163, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 0144, 
  0075, 0042, 0144, 0145, 0146, 0163, 0062, 0042, 0040, 0057, 0076, 0012, 0040, 0040, 0074, 0163, 
  0157, 0144, 0151, 0160, 0157, 0144, 0151, 0072, 0156, 0141, 0155, 0145, 0144, 0166, 0151, 0145, 
  0167, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 0144, 0075, 0042, 0142, 0141, 0163, 0145, 0042, 
  0012, 0040, 0040, 0040, 0040, 0040, 0142, 0157, 0162, 0144, 0145, 0162, 0157, 0160, 0141, 0143, 
  0151, 0164, 0171, 0075, 0042, 0060, 0056, 0065, 0060, 0061, 0071, 0066, 0060, 0067, 0070, 0042, 
  0012, 0040, 0040, 0040, 0040, 0040, 0151, 0156, 0153, 0163, 0143, 0141, 0160, 0145, 0072, 0160, 
  0141, 0147, 0145, 0157, 0160, 0141, 0143, 0151, 0164, 0171, 0075, 0042, 0060, 0042, 0012, 0040, 
  0040, 0040, 0040, 0040, 0151, 0156, 0153, 0163, 0143, 0141, 0160, 0145, 0072, 0160, 0141, 0147, 
  0145, 0163, 0150, 0141, 0144, 0157, 0167, 0075, 0042, 0062, 0042, 0012, 0040, 0040, 0040, 0040, 
  0040, 0151, 0156, 0153, 0163, 0143, 0141, 0160, 0145, 0072, 0172, 0157, 0157, 0155, 0075, 0042, 
  0064, 0056, 0060, 0064, 0071, 0065, 0063, 0070, 0064, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 
  0151, 0156, 0153, 0163, 0143, 0141, 0160, 0145, 0072, 0143, 0170, 0075, 0042, 0061, 0066, 0056, 
  0065, 0066, 0070, 0066, 0070, 0064, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 0156, 0153, 
  0163, 0143, 0141, 0160, 0145, 0072, 0143, 0171, 0075, 0042, 0063, 0066, 0056, 0064, 0071, 0070, 
  0060, 0062, 0064, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 0156, 0153, 0163, 0143, 0141, 
  0160, 0145, 0072, 0144, 0157, 0143, 0165, 0155, 0145, 0156, 0164, 0055, 0165, 0156, 0151, 0164, 
  0163, 0075, 0042, 0155, 0155, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 0156, 0153, 0163, 
  0143, 0141, 0160, 0145, 0072, 0143, 0165, 0162, 0162, 0145, 0156, 0164, 0055, 0154, 0141, 0171, 
  0145, 0162, 0075, 0042, 0154, 0141, 0171, 0145, 0162, 0061, 0042, 0012, 0040, 0040, 0040, 0040, 
  0040, 0151, 0156, 0153, 0163, 0143, 0141, 0160, 0145, 0072, 0144, 0157, 0143, 0165, 0155, 0145, 
  0156, 0164, 0055, 0162, 0157, 0164, 0141, 0164, 0151, 0157, 0156, 0075, 0042, 0060, 0042, 0012, 
  0040, 0040, 0040, 0040, 0040, 0163, 0150, 0157, 0167, 0147, 0162, 0151, 0144, 0075, 0042, 0146, 
  0141, 0154, 0163, 0145, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 0156, 0153, 0163, 0143, 
  0141, 0160, 0145, 0072, 0167, 0151, 0156, 0144, 0157, 0167, 0055, 0167, 0151, 0144, 0164, 0150, 
  0075, 0042, 0061, 0063, 0060, 0067, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 0156, 0153, 
  0163, 0143, 0141, 0160, 0145, 0072, 0167, 0151, 0156, 0144, 0157, 0167, 0055, 0150, 0145, 0151, 
  0147, 0150, 0164, 0075, 0042, 0071, 0067, 0067, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 
  0156, 0153, 0163, 0143, 0141, 0160, 0145, 0072, 0167, 0151, 0156, 0144, 0157, 0167, 0055, 0170, 
  0075, 0042, 0065, 0062, 0060, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 0156, 0153, 0163, 
  0143, 0141, 0160, 0145, 0072, 0167, 0151, 0156, 0144, 0157, 0167, 0055, 0171, 0075, 0042, 0061, 
  0066, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 0156, 0153, 0163, 0143, 0141, 0160, 0145, 
  0072, 0167, 0151, 0156, 0144, 0157, 0167, 0055, 0155, 0141, 0170, 0151, 0155, 0151, 0172, 0145, 
  0144, 0075, 0042, 0060, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 0156, 0153, 0163, 0143, 
  0141, 0160, 0145, 0072, 0163, 0150, 0157, 0167, 0160, 0141, 0147, 0145, 0163, 0150, 0141, 0144, 
  0157, 0167, 0075, 0042, 0146, 0141, 0154, 0163, 0145, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 
  0163, 0150, 0157, 0167, 0142, 0157, 0162, 0144, 0145, 0162, 0075, 0042, 0164, 0162, 0165, 0145, 
  0042, 0012, 0040, 0040, 0040, 0040, 0040, 0142, 0157, 0162, 0144, 0145, 0162, 0154, 0141, 0171, 
  0145, 0162, 0075, 0042, 0146, 0141, 0154, 0163, 0145, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 
  0142, 0157, 0162, 0144, 0145, 0162, 0143, 0157, 0154, 0157, 0162, 0075, 0042, 0043, 0060, 0060, 
  0060, 0060, 0060, 0060, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0160, 0141, 0147, 0145, 0143, 
  0157, 0154, 0157, 0162, 0075, 0042, 0043, 0146, 0146, 0146, 0146, 0146, 0146, 0042, 0040, 0057, 
  0076, 0012, 0040, 0040, 0074, 0155, 0145, 0164, 0141, 0144, 0141, 0164, 0141, 0012, 0040, 0040, 
  0040, 0040, 0040, 0151, 0144, 0075, 0042, 0155, 0145, 0164, 0141, 0144, 0141, 0164, 0141, 0065, 
  0042, 0076, 0012, 0040, 0040, 0040, 0040, 0074, 0162, 0144, 0146, 0072, 0122, 0104, 0106, 0076, 
  0012, 0040, 0040, 0040, 0040, 0040, 0040, 0074, 0143, 0143, 0072, 0127, 0157, 0162, 0153, 0012, 
  0040, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0162, 0144, 0146, 0072, 0141, 0142, 0157, 
  0165, 0164, 0075, 0042, 0042, 0076, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0074, 
  0144, 0143, 0072, 0146, 0157, 0162, 0155, 0141, 0164, 0076, 0151, 0155, 0141, 0147, 0145, 0057, 
  0163, 0166, 0147, 0053, 0170, 0155, 0154, 0074, 0057, 0144, 0143, 0072, 0146, 0157, 0162, 0155, 
  0141, 0164, 0076, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0074, 0144, 0143, 0072, 
  0164, 0171, 0160, 0145, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 
  0162, 0144, 0146, 0072, 0162, 0145, 0163, 0157, 0165, 0162, 0143, 0145, 0075, 0042, 0150, 0164, 
  0164, 0160, 0072, 0057, 0057, 0160, 0165, 0162, 0154, 0056, 0157, 0162, 0147, 0057, 0144, 0143, 
  0057, 0144, 0143, 0155, 0151, 0164, 0171, 0160, 0145, 0057, 0123, 0164, 0151, 0154, 0154, 0111, 
  0155, 0141, 0147, 0145, 0042, 0040, 0057, 0076, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 
  0040, 0074, 0144, 0143, 0072, 0164, 0151, 0164, 0154, 0145, 0076, 0074, 0057, 0144, 0143, 0072, 
  0164, 0151, 0164, 0154, 0145, 0076, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 0074, 0057, 0143, 
  0143, 0072, 0127, 0157, 0162, 0153, 0076, 0012, 0040, 0040, 0040, 0040, 0074, 0057, 0162, 0144, 
  0146, 0072, 0122, 0104, 0106, 0076, 0012, 0040, 0040, 0074, 0057, 0155, 0145, 0164, 0141, 0144, 
  0141, 0164, 0141, 0076, 0012, 0040, 0040, 0074, 0147, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 
  0156, 0153, 0163, 0143, 0141, 0160, 0145, 0072, 0154, 0141, 0142, 0145, 0154, 0075, 0042, 0114, 
  0141, 0171, 0145, 0162, 0040, 0061, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 0156, 0153, 
  0163, 0143, 0141, 0160, 0145, 0072, 0147, 0162, 0157, 0165, 0160, 0155, 0157, 0144, 0145, 0075, 
  0042, 0154, 0141, 0171, 0145, 0162, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0151, 0144, 0075, 
  0042, 0154, 0141, 0171, 0145, 0162, 0061, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0164, 0162, 
  0141, 0156, 0163, 0146, 0157, 0162, 0155, 0075, 0042, 0164, 0162, 0141, 0156, 0163, 0154, 0141, 
  0164, 0145, 0050, 0060, 0054, 0060, 0051, 0042, 0076, 0012, 0040, 0040, 0040, 0040, 0074, 0160, 
  0141, 0164, 0150, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0163, 0164, 0171, 0154, 0145, 
  0075, 0042, 0146, 0151, 0154, 0154, 0072, 0156, 0157, 0156, 0145, 0073, 0146, 0151, 0154, 0154, 
  0055, 0162, 0165, 0154, 0145, 0072, 0145, 0166, 0145, 0156, 0157, 0144, 0144, 0073, 0163, 0164, 
  0162, 0157, 0153, 0145, 0072, 0043, 0060, 0060, 0060, 0060, 0060, 0060, 0073, 0163, 0164, 0162, 
  0157, 0153, 0145, 0055, 0167, 0151, 0144, 0164, 0150, 0072, 0061, 0071, 0056, 0063, 0066, 0065, 
  0073, 0163, 0164, 0162, 0157, 0153, 0145, 0055, 0154, 0151, 0156, 0145, 0143, 0141, 0160, 0072, 
  0162, 0157, 0165, 0156, 0144, 0073, 0163, 0164, 0162, 0157, 0153, 0145, 0055, 0154, 0151, 0156, 
  0145, 0152, 0157, 0151, 0156, 0072, 0162, 0157, 0165, 0156, 0144, 0073, 0163, 0164, 0162, 0157, 
  0153, 0145, 0055, 0155, 0151, 0164, 0145, 0162, 0154, 0151, 0155, 0151, 0164, 0072, 0064, 0073, 
  0163, 0164, 0162, 0157, 0153, 0145, 0055, 0144, 0141, 0163, 0150, 0141, 0162, 0162, 0141, 0171, 
  0072, 0156, 0157, 0156, 0145, 0073, 0163, 0164, 0162, 0157, 0153, 0145, 0055, 0157, 0160, 0141, 
  0143, 0151, 0164, 0171, 0072, 0061, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0144, 
  0075, 0042, 0155, 0040, 0061, 0071, 0064, 0056, 0064, 0063, 0067, 0070, 0061, 0054, 0061, 0063, 
  0056, 0065, 0066, 0061, 0071, 0064, 0066, 0040, 0060, 0056, 0061, 0061, 0061, 0066, 0070, 0054, 
  0062, 0060, 0064, 0056, 0065, 0062, 0063, 0065, 0071, 0064, 0042, 0012, 0040, 0040, 0040, 0040, 
  0040, 0040, 0040, 0151, 0144, 0075, 0042, 0160, 0141, 0164, 0150, 0070, 0064, 0062, 0042, 0040, 
  0057, 0076, 0012, 0040, 0040, 0040, 0040, 0074, 0147, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 
  0040, 0141, 0162, 0151, 0141, 0055, 0154, 0141, 0142, 0145, 0154, 0075, 0042, 0127, 0042, 0012, 
  0040, 0040, 0040, 0040, 0040, 0040, 0040, 0164, 0162, 0141, 0156, 0163, 0146, 0157, 0162, 0155, 
  0075, 0042, 0163, 0143, 0141, 0154, 0145, 0050, 0061, 0056, 0060, 0061, 0070, 0062, 0070, 0070, 
  0061, 0054, 0060, 0056, 0071, 0070, 0062, 0060, 0064, 0060, 0063, 0064, 0051, 0042, 0012, 0040, 
  0040, 0040, 0040, 0040, 0040, 0040, 0151, 0144, 0075, 0042, 0164, 0145, 0170, 0164, 0070, 0063, 
  0070, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0163, 0164, 0171, 0154, 0145, 0075, 
  0042, 0146, 0157, 0156, 0164, 0055, 0163, 0164, 0171, 0154, 0145, 0072, 0156, 0157, 0162, 0155, 
  0141, 0154, 0073, 0146, 0157, 0156, 0164, 0055, 0167, 0145, 0151, 0147, 0150, 0164, 0072, 0156, 
  0157, 0162, 0155, 0141, 0154, 0073, 0146, 0157, 0156, 0164, 0055, 0163, 0151, 0172, 0145, 0072, 
  0061, 0062, 0060, 0056, 0062, 0062, 0062, 0160, 0170, 0073, 0154, 0151, 0156, 0145, 0055, 0150, 
  0145, 0151, 0147, 0150, 0164, 0072, 0061, 0062, 0065, 0045, 0073, 0146, 0157, 0156, 0164, 0055, 
  0146, 0141, 0155, 0151, 0154, 0171, 0072, 0163, 0141, 0156, 0163, 0055, 0163, 0145, 0162, 0151, 
  0146, 0073, 0154, 0145, 0164, 0164, 0145, 0162, 0055, 0163, 0160, 0141, 0143, 0151, 0156, 0147, 
  0072, 0060, 0160, 0170, 0073, 0167, 0157, 0162, 0144, 0055, 0163, 0160, 0141, 0143, 0151, 0156, 
  0147, 0072, 0060, 0160, 0170, 0073, 0146, 0151, 0154, 0154, 0072, 0043, 0060, 0060, 0060, 0060, 
  0060, 0060, 0073, 0146, 0151, 0154, 0154, 0055, 0157, 0160, 0141, 0143, 0151, 0164, 0171, 0072, 
  0061, 0073, 0163, 0164, 0162, 0157, 0153, 0145, 0072, 0156, 0157, 0156, 0145, 0073, 0163, 0164, 
  0162, 0157, 0153, 0145, 0055, 0167, 0151, 0144, 0164, 0150, 0072, 0060, 0056, 0062, 0066, 0064, 
  0065, 0070, 0065, 0160, 0170, 0073, 0163, 0164, 0162, 0157, 0153, 0145, 0055, 0154, 0151, 0156, 
  0145, 0143, 0141, 0160, 0072, 0142, 0165, 0164, 0164, 0073, 0163, 0164, 0162, 0157, 0153, 0145, 
  0055, 0154, 0151, 0156, 0145, 0152, 0157, 0151, 0156, 0072, 0155, 0151, 0164, 0145, 0162, 0073, 
  0163, 0164, 0162, 0157, 0153, 0145, 0055, 0157, 0160, 0141, 0143, 0151, 0164, 0171, 0072, 0061, 
  0042, 0076, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 0074, 0160, 0141, 0164, 0150, 0012, 0040, 
  0040, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0144, 0075, 0042, 0115, 0040, 0062, 0061, 0056, 
  0063, 0063, 0065, 0071, 0062, 0061, 0054, 0061, 0062, 0064, 0056, 0062, 0060, 0061, 0061, 0064, 
  0040, 0110, 0040, 0063, 0063, 0056, 0063, 0061, 0061, 0061, 0066, 0040, 0154, 0040, 0061, 0070, 
  0056, 0064, 0063, 0062, 0064, 0067, 0064, 0054, 0067, 0064, 0056, 0060, 0070, 0062, 0061, 0061, 
  0040, 0061, 0070, 0056, 0063, 0067, 0063, 0067, 0067, 0063, 0054, 0055, 0067, 0064, 0056, 0060, 
  0070, 0062, 0061, 0061, 0040, 0150, 0040, 0061, 0063, 0056, 0063, 0062, 0065, 0063, 0070, 0070, 
  0040, 0154, 0040, 0061, 0070, 0056, 0064, 0063, 0062, 0064, 0067, 0065, 0054, 0067, 0064, 0056, 
  0060, 0070, 0062, 0061, 0061, 0040, 0061, 0070, 0056, 0063, 0067, 0063, 0067, 0067, 0054, 0055, 
  0067, 0064, 0056, 0060, 0070, 0062, 0061, 0061, 0040, 0150, 0040, 0061, 0062, 0056, 0060, 0063, 
  0063, 0071, 0064, 0040, 0154, 0040, 0055, 0062, 0062, 0056, 0060, 0061, 0063, 0063, 0054, 0070, 
  0067, 0056, 0066, 0064, 0062, 0063, 0040, 0110, 0040, 0071, 0065, 0056, 0063, 0065, 0071, 0063, 
  0063, 0061, 0040, 0114, 0040, 0067, 0066, 0056, 0070, 0066, 0070, 0061, 0065, 0064, 0054, 0061, 
  0063, 0065, 0056, 0067, 0066, 0065, 0064, 0066, 0040, 0065, 0070, 0056, 0062, 0060, 0060, 0070, 
  0067, 0061, 0054, 0062, 0061, 0061, 0056, 0070, 0064, 0063, 0064, 0064, 0040, 0110, 0040, 0064, 
  0063, 0056, 0062, 0071, 0060, 0065, 0062, 0065, 0040, 0132, 0042, 0012, 0040, 0040, 0040, 0040, 
  0040, 0040, 0040, 0040, 0040, 0163, 0164, 0171, 0154, 0145, 0075, 0042, 0163, 0164, 0162, 0157, 
  0153, 0145, 0055, 0167, 0151, 0144, 0164, 0150, 0072, 0060, 0056, 0062, 0066, 0064, 0065, 0070, 
  0065, 0160, 0170, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0151, 0144, 
  0075, 0042, 0160, 0141, 0164, 0150, 0061, 0070, 0042, 0040, 0057, 0076, 0012, 0040, 0040, 0040, 
  0040, 0074, 0057, 0147, 0076, 0012, 0040, 0040, 0040, 0040, 0074, 0145, 0154, 0154, 0151, 0160, 
  0163, 0145, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0163, 0164, 0171, 0154, 0145, 0075, 
  0042, 0146, 0151, 0154, 0154, 0072, 0043, 0060, 0060, 0060, 0060, 0060, 0060, 0073, 0146, 0151, 
  0154, 0154, 0055, 0157, 0160, 0141, 0143, 0151, 0164, 0171, 0072, 0061, 0073, 0163, 0164, 0162, 
  0157, 0153, 0145, 0072, 0156, 0157, 0156, 0145, 0073, 0163, 0164, 0162, 0157, 0153, 0145, 0055, 
  0167, 0151, 0144, 0164, 0150, 0072, 0061, 0067, 0056, 0070, 0073, 0163, 0164, 0162, 0157, 0153, 
  0145, 0055, 0155, 0151, 0164, 0145, 0162, 0154, 0151, 0155, 0151, 0164, 0072, 0064, 0073, 0163, 
  0164, 0162, 0157, 0153, 0145, 0055, 0144, 0141, 0163, 0150, 0141, 0162, 0162, 0141, 0171, 0072, 
  0156, 0157, 0156, 0145, 0073, 0160, 0141, 0151, 0156, 0164, 0055, 0157, 0162, 0144, 0145, 0162, 
  0072, 0155, 0141, 0162, 0153, 0145, 0162, 0163, 0040, 0163, 0164, 0162, 0157, 0153, 0145, 0040, 
  0146, 0151, 0154, 0154, 0073, 0145, 0156, 0141, 0142, 0154, 0145, 0055, 0142, 0141, 0143, 0153, 
  0147, 0162, 0157, 0165, 0156, 0144, 0072, 0156, 0145, 0167, 0042, 0012, 0040, 0040, 0040, 0040, 
  0040, 0040, 0040, 0151, 0144, 0075, 0042, 0160, 0141, 0164, 0150, 0070, 0063, 0064, 0055, 0063, 
  0055, 0063, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0143, 0170, 0075, 0042, 0070, 
  0060, 0056, 0070, 0071, 0063, 0061, 0060, 0065, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 
  0040, 0143, 0171, 0075, 0042, 0065, 0066, 0056, 0062, 0071, 0063, 0065, 0066, 0042, 0012, 0040, 
  0040, 0040, 0040, 0040, 0040, 0040, 0162, 0170, 0075, 0042, 0064, 0061, 0056, 0062, 0066, 0064, 
  0063, 0070, 0071, 0042, 0012, 0040, 0040, 0040, 0040, 0040, 0040, 0040, 0162, 0171, 0075, 0042, 
  0063, 0067, 0056, 0071, 0063, 0066, 0062, 0060, 0063, 0042, 0040, 0057, 0076, 0012, 0040, 0040, 
  0074, 0057, 0147, 0076, 0012, 0074, 0057, 0163, 0166, 0147, 0076, 0012, 0000, 0000, 0050, 0165, 
  0165, 0141, 0171, 0051, 0057, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0155, 0171, 0141, 0160, 
  0160, 0057, 0000, 0000, 0000, 0000, 0000, 0000
} };
#else /* _MSC_VER */
static const SECTION union { const guint8 data[3241]; const double alignment; void * const ptr;}  resources_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\254\000\000\000\000\000\000\050\005\000\000\000"
  "\000\000\000\000\004\000\000\000\004\000\000\000\004\000\000\000"
  "\004\000\000\000\312\053\334\151\004\000\000\000\254\000\000\000"
  "\005\000\114\000\264\000\000\000\270\000\000\000\113\120\220\013"
  "\003\000\000\000\270\000\000\000\004\000\114\000\274\000\000\000"
  "\300\000\000\000\336\123\043\303\000\000\000\000\300\000\000\000"
  "\014\000\166\000\320\000\000\000\224\014\000\000\324\265\002\000"
  "\377\377\377\377\224\014\000\000\001\000\114\000\230\014\000\000"
  "\234\014\000\000\341\031\343\076\001\000\000\000\234\014\000\000"
  "\006\000\114\000\244\014\000\000\250\014\000\000\144\141\164\141"
  "\057\000\000\000\002\000\000\000\157\162\147\057\004\000\000\000"
  "\155\171\055\151\155\141\147\145\056\163\166\147\000\000\000\000"
  "\264\013\000\000\000\000\000\000\074\077\170\155\154\040\166\145"
  "\162\163\151\157\156\075\042\061\056\060\042\040\145\156\143\157"
  "\144\151\156\147\075\042\125\124\106\055\070\042\040\163\164\141"
  "\156\144\141\154\157\156\145\075\042\156\157\042\077\076\012\074"
  "\163\166\147\012\040\040\040\170\155\154\156\163\072\144\143\075"
  "\042\150\164\164\160\072\057\057\160\165\162\154\056\157\162\147"
  "\057\144\143\057\145\154\145\155\145\156\164\163\057\061\056\061"
  "\057\042\012\040\040\040\170\155\154\156\163\072\143\143\075\042"
  "\150\164\164\160\072\057\057\143\162\145\141\164\151\166\145\143"
  "\157\155\155\157\156\163\056\157\162\147\057\156\163\043\042\012"
  "\040\040\040\170\155\154\156\163\072\162\144\146\075\042\150\164"
  "\164\160\072\057\057\167\167\167\056\167\063\056\157\162\147\057"
  "\061\071\071\071\057\060\062\057\062\062\055\162\144\146\055\163"
  "\171\156\164\141\170\055\156\163\043\042\012\040\040\040\170\155"
  "\154\156\163\072\163\166\147\075\042\150\164\164\160\072\057\057"
  "\167\167\167\056\167\063\056\157\162\147\057\062\060\060\060\057"
  "\163\166\147\042\012\040\040\040\170\155\154\156\163\075\042\150"
  "\164\164\160\072\057\057\167\167\167\056\167\063\056\157\162\147"
  "\057\062\060\060\060\057\163\166\147\042\012\040\040\040\170\155"
  "\154\156\163\072\163\157\144\151\160\157\144\151\075\042\150\164"
  "\164\160\072\057\057\163\157\144\151\160\157\144\151\056\163\157"
  "\165\162\143\145\146\157\162\147\145\056\156\145\164\057\104\124"
  "\104\057\163\157\144\151\160\157\144\151\055\060\056\144\164\144"
  "\042\012\040\040\040\170\155\154\156\163\072\151\156\153\163\143"
  "\141\160\145\075\042\150\164\164\160\072\057\057\167\167\167\056"
  "\151\156\153\163\143\141\160\145\056\157\162\147\057\156\141\155"
  "\145\163\160\141\143\145\163\057\151\156\153\163\143\141\160\145"
  "\042\012\040\040\040\167\151\144\164\150\075\042\063\062\042\012"
  "\040\040\040\150\145\151\147\150\164\075\042\063\062\042\012\040"
  "\040\040\166\151\145\167\102\157\170\075\042\060\040\060\040\062"
  "\060\071\056\070\071\060\065\065\040\062\062\066\056\060\062\062"
  "\067\071\042\012\040\040\040\166\145\162\163\151\157\156\075\042"
  "\061\056\061\042\012\040\040\040\151\144\075\042\163\166\147\070"
  "\042\012\040\040\040\151\156\153\163\143\141\160\145\072\166\145"
  "\162\163\151\157\156\075\042\061\056\060\056\062\040\050\145\070"
  "\066\143\070\067\060\070\067\071\054\040\062\060\062\061\055\060"
  "\061\055\061\065\051\042\012\040\040\040\163\157\144\151\160\157"
  "\144\151\072\144\157\143\156\141\155\145\075\042\141\141\141\141"
  "\055\163\171\155\142\157\154\151\143\056\163\166\147\042\012\040"
  "\040\040\163\164\171\154\145\075\042\145\156\141\142\154\145\055"
  "\142\141\143\153\147\162\157\165\156\144\072\156\145\167\042\076"
  "\012\040\040\074\144\145\146\163\012\040\040\040\040\040\151\144"
  "\075\042\144\145\146\163\062\042\040\057\076\012\040\040\074\163"
  "\157\144\151\160\157\144\151\072\156\141\155\145\144\166\151\145"
  "\167\012\040\040\040\040\040\151\144\075\042\142\141\163\145\042"
  "\012\040\040\040\040\040\142\157\162\144\145\162\157\160\141\143"
  "\151\164\171\075\042\060\056\065\060\061\071\066\060\067\070\042"
  "\012\040\040\040\040\040\151\156\153\163\143\141\160\145\072\160"
  "\141\147\145\157\160\141\143\151\164\171\075\042\060\042\012\040"
  "\040\040\040\040\151\156\153\163\143\141\160\145\072\160\141\147"
  "\145\163\150\141\144\157\167\075\042\062\042\012\040\040\040\040"
  "\040\151\156\153\163\143\141\160\145\072\172\157\157\155\075\042"
  "\064\056\060\064\071\065\063\070\064\042\012\040\040\040\040\040"
  "\151\156\153\163\143\141\160\145\072\143\170\075\042\061\066\056"
  "\065\066\070\066\070\064\042\012\040\040\040\040\040\151\156\153"
  "\163\143\141\160\145\072\143\171\075\042\063\066\056\064\071\070"
  "\060\062\064\042\012\040\040\040\040\040\151\156\153\163\143\141"
  "\160\145\072\144\157\143\165\155\145\156\164\055\165\156\151\164"
  "\163\075\042\155\155\042\012\040\040\040\040\040\151\156\153\163"
  "\143\141\160\145\072\143\165\162\162\145\156\164\055\154\141\171"
  "\145\162\075\042\154\141\171\145\162\061\042\012\040\040\040\040"
  "\040\151\156\153\163\143\141\160\145\072\144\157\143\165\155\145"
  "\156\164\055\162\157\164\141\164\151\157\156\075\042\060\042\012"
  "\040\040\040\040\040\163\150\157\167\147\162\151\144\075\042\146"
  "\141\154\163\145\042\012\040\040\040\040\040\151\156\153\163\143"
  "\141\160\145\072\167\151\156\144\157\167\055\167\151\144\164\150"
  "\075\042\061\063\060\067\042\012\040\040\040\040\040\151\156\153"
  "\163\143\141\160\145\072\167\151\156\144\157\167\055\150\145\151"
  "\147\150\164\075\042\071\067\067\042\012\040\040\040\040\040\151"
  "\156\153\163\143\141\160\145\072\167\151\156\144\157\167\055\170"
  "\075\042\065\062\060\042\012\040\040\040\040\040\151\156\153\163"
  "\143\141\160\145\072\167\151\156\144\157\167\055\171\075\042\061"
  "\066\042\012\040\040\040\040\040\151\156\153\163\143\141\160\145"
  "\072\167\151\156\144\157\167\055\155\141\170\151\155\151\172\145"
  "\144\075\042\060\042\012\040\040\040\040\040\151\156\153\163\143"
  "\141\160\145\072\163\150\157\167\160\141\147\145\163\150\141\144"
  "\157\167\075\042\146\141\154\163\145\042\012\040\040\040\040\040"
  "\163\150\157\167\142\157\162\144\145\162\075\042\164\162\165\145"
  "\042\012\040\040\040\040\040\142\157\162\144\145\162\154\141\171"
  "\145\162\075\042\146\141\154\163\145\042\012\040\040\040\040\040"
  "\142\157\162\144\145\162\143\157\154\157\162\075\042\043\060\060"
  "\060\060\060\060\042\012\040\040\040\040\040\160\141\147\145\143"
  "\157\154\157\162\075\042\043\146\146\146\146\146\146\042\040\057"
  "\076\012\040\040\074\155\145\164\141\144\141\164\141\012\040\040"
  "\040\040\040\151\144\075\042\155\145\164\141\144\141\164\141\065"
  "\042\076\012\040\040\040\040\074\162\144\146\072\122\104\106\076"
  "\012\040\040\040\040\040\040\074\143\143\072\127\157\162\153\012"
  "\040\040\040\040\040\040\040\040\040\162\144\146\072\141\142\157"
  "\165\164\075\042\042\076\012\040\040\040\040\040\040\040\040\074"
  "\144\143\072\146\157\162\155\141\164\076\151\155\141\147\145\057"
  "\163\166\147\053\170\155\154\074\057\144\143\072\146\157\162\155"
  "\141\164\076\012\040\040\040\040\040\040\040\040\074\144\143\072"
  "\164\171\160\145\012\040\040\040\040\040\040\040\040\040\040\040"
  "\162\144\146\072\162\145\163\157\165\162\143\145\075\042\150\164"
  "\164\160\072\057\057\160\165\162\154\056\157\162\147\057\144\143"
  "\057\144\143\155\151\164\171\160\145\057\123\164\151\154\154\111"
  "\155\141\147\145\042\040\057\076\012\040\040\040\040\040\040\040"
  "\040\074\144\143\072\164\151\164\154\145\076\074\057\144\143\072"
  "\164\151\164\154\145\076\012\040\040\040\040\040\040\074\057\143"
  "\143\072\127\157\162\153\076\012\040\040\040\040\074\057\162\144"
  "\146\072\122\104\106\076\012\040\040\074\057\155\145\164\141\144"
  "\141\164\141\076\012\040\040\074\147\012\040\040\040\040\040\151"
  "\156\153\163\143\141\160\145\072\154\141\142\145\154\075\042\114"
  "\141\171\145\162\040\061\042\012\040\040\040\040\040\151\156\153"
  "\163\143\141\160\145\072\147\162\157\165\160\155\157\144\145\075"
  "\042\154\141\171\145\162\042\012\040\040\040\040\040\151\144\075"
  "\042\154\141\171\145\162\061\042\012\040\040\040\040\040\164\162"
  "\141\156\163\146\157\162\155\075\042\164\162\141\156\163\154\141"
  "\164\145\050\060\054\060\051\042\076\012\040\040\040\040\074\160"
  "\141\164\150\012\040\040\040\040\040\040\040\163\164\171\154\145"
  "\075\042\146\151\154\154\072\156\157\156\145\073\146\151\154\154"
  "\055\162\165\154\145\072\145\166\145\156\157\144\144\073\163\164"
  "\162\157\153\145\072\043\060\060\060\060\060\060\073\163\164\162"
  "\157\153\145\055\167\151\144\164\150\072\061\071\056\063\066\065"
  "\073\163\164\162\157\153\145\055\154\151\156\145\143\141\160\072"
  "\162\157\165\156\144\073\163\164\162\157\153\145\055\154\151\156"
  "\145\152\157\151\156\072\162\157\165\156\144\073\163\164\162\157"
  "\153\145\055\155\151\164\145\162\154\151\155\151\164\072\064\073"
  "\163\164\162\157\153\145\055\144\141\163\150\141\162\162\141\171"
  "\072\156\157\156\145\073\163\164\162\157\153\145\055\157\160\141"
  "\143\151\164\171\072\061\042\012\040\040\040\040\040\040\040\144"
  "\075\042\155\040\061\071\064\056\064\063\067\070\061\054\061\063"
  "\056\065\066\061\071\064\066\040\060\056\061\061\061\066\070\054"
  "\062\060\064\056\065\062\063\065\071\064\042\012\040\040\040\040"
  "\040\040\040\151\144\075\042\160\141\164\150\070\064\062\042\040"
  "\057\076\012\040\040\040\040\074\147\012\040\040\040\040\040\040"
  "\040\141\162\151\141\055\154\141\142\145\154\075\042\127\042\012"
  "\040\040\040\040\040\040\040\164\162\141\156\163\146\157\162\155"
  "\075\042\163\143\141\154\145\050\061\056\060\061\070\062\070\070"
  "\061\054\060\056\071\070\062\060\064\060\063\064\051\042\012\040"
  "\040\040\040\040\040\040\151\144\075\042\164\145\170\164\070\063"
  "\070\042\012\040\040\040\040\040\040\040\163\164\171\154\145\075"
  "\042\146\157\156\164\055\163\164\171\154\145\072\156\157\162\155"
  "\141\154\073\146\157\156\164\055\167\145\151\147\150\164\072\156"
  "\157\162\155\141\154\073\146\157\156\164\055\163\151\172\145\072"
  "\061\062\060\056\062\062\062\160\170\073\154\151\156\145\055\150"
  "\145\151\147\150\164\072\061\062\065\045\073\146\157\156\164\055"
  "\146\141\155\151\154\171\072\163\141\156\163\055\163\145\162\151"
  "\146\073\154\145\164\164\145\162\055\163\160\141\143\151\156\147"
  "\072\060\160\170\073\167\157\162\144\055\163\160\141\143\151\156"
  "\147\072\060\160\170\073\146\151\154\154\072\043\060\060\060\060"
  "\060\060\073\146\151\154\154\055\157\160\141\143\151\164\171\072"
  "\061\073\163\164\162\157\153\145\072\156\157\156\145\073\163\164"
  "\162\157\153\145\055\167\151\144\164\150\072\060\056\062\066\064"
  "\065\070\065\160\170\073\163\164\162\157\153\145\055\154\151\156"
  "\145\143\141\160\072\142\165\164\164\073\163\164\162\157\153\145"
  "\055\154\151\156\145\152\157\151\156\072\155\151\164\145\162\073"
  "\163\164\162\157\153\145\055\157\160\141\143\151\164\171\072\061"
  "\042\076\012\040\040\040\040\040\040\074\160\141\164\150\012\040"
  "\040\040\040\040\040\040\040\040\144\075\042\115\040\062\061\056"
  "\063\063\065\071\062\061\054\061\062\064\056\062\060\061\061\064"
  "\040\110\040\063\063\056\063\061\061\061\066\040\154\040\061\070"
  "\056\064\063\062\064\067\064\054\067\064\056\060\070\062\061\061"
  "\040\061\070\056\063\067\063\067\067\063\054\055\067\064\056\060"
  "\070\062\061\061\040\150\040\061\063\056\063\062\065\063\070\070"
  "\040\154\040\061\070\056\064\063\062\064\067\065\054\067\064\056"
  "\060\070\062\061\061\040\061\070\056\063\067\063\067\067\054\055"
  "\067\064\056\060\070\062\061\061\040\150\040\061\062\056\060\063"
  "\063\071\064\040\154\040\055\062\062\056\060\061\063\063\054\070"
  "\067\056\066\064\062\063\040\110\040\071\065\056\063\065\071\063"
  "\063\061\040\114\040\067\066\056\070\066\070\061\065\064\054\061"
  "\063\065\056\067\066\065\064\066\040\065\070\056\062\060\060\070"
  "\067\061\054\062\061\061\056\070\064\063\064\064\040\110\040\064"
  "\063\056\062\071\060\065\062\065\040\132\042\012\040\040\040\040"
  "\040\040\040\040\040\163\164\171\154\145\075\042\163\164\162\157"
  "\153\145\055\167\151\144\164\150\072\060\056\062\066\064\065\070"
  "\065\160\170\042\012\040\040\040\040\040\040\040\040\040\151\144"
  "\075\042\160\141\164\150\061\070\042\040\057\076\012\040\040\040"
  "\040\074\057\147\076\012\040\040\040\040\074\145\154\154\151\160"
  "\163\145\012\040\040\040\040\040\040\040\163\164\171\154\145\075"
  "\042\146\151\154\154\072\043\060\060\060\060\060\060\073\146\151"
  "\154\154\055\157\160\141\143\151\164\171\072\061\073\163\164\162"
  "\157\153\145\072\156\157\156\145\073\163\164\162\157\153\145\055"
  "\167\151\144\164\150\072\061\067\056\070\073\163\164\162\157\153"
  "\145\055\155\151\164\145\162\154\151\155\151\164\072\064\073\163"
  "\164\162\157\153\145\055\144\141\163\150\141\162\162\141\171\072"
  "\156\157\156\145\073\160\141\151\156\164\055\157\162\144\145\162"
  "\072\155\141\162\153\145\162\163\040\163\164\162\157\153\145\040"
  "\146\151\154\154\073\145\156\141\142\154\145\055\142\141\143\153"
  "\147\162\157\165\156\144\072\156\145\167\042\012\040\040\040\040"
  "\040\040\040\151\144\075\042\160\141\164\150\070\063\064\055\063"
  "\055\063\042\012\040\040\040\040\040\040\040\143\170\075\042\070"
  "\060\056\070\071\063\061\060\065\042\012\040\040\040\040\040\040"
  "\040\143\171\075\042\065\066\056\062\071\063\065\066\042\012\040"
  "\040\040\040\040\040\040\162\170\075\042\064\061\056\062\066\064"
  "\063\070\071\042\012\040\040\040\040\040\040\040\162\171\075\042"
  "\063\067\056\071\063\066\062\060\063\042\040\057\076\012\040\040"
  "\074\057\147\076\012\074\057\163\166\147\076\012\000\000\050\165"
  "\165\141\171\051\057\000\000\000\001\000\000\000\155\171\141\160"
  "\160\057\000\000\000\000\000\000" };
#endif /* !_MSC_VER */

static GStaticResource static_resource = { resources_resource_data.data, sizeof (resources_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *resources_get_resource (void);
GResource *resources_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}