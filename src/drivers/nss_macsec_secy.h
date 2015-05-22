#include <stdbool.h>

#define EG_CTL_COMPARE_ETHER_TYPE 1
#define FAL_RX_PRC_ACTION_PROCESS 1
#define FAL_RX_SC_VALIDATE_FRAME_CHECK 1
#define FAL_RX_SC_VALIDATE_FRAME_DISABLED 1
#define FAL_RX_SC_VALIDATE_FRAME_STRICT 1
#define FAL_SC_SA_MAP_1_4 1
#define FAL_TX_CLASS_ACTION_FORWARD 1
#define IG_CTL_COMPARE_ETHER_TYPE 1

typedef struct _fal_rx_ctl_filt_t { int bypass, ether_type_da_range, match_mask, match_type; } fal_rx_ctl_filt_t;
typedef struct _fal_rx_prc_lut_t { int action, channel, offset, sci_mask, valid; char sci[8]; } fal_rx_prc_lut_t;
typedef struct _fal_rx_sak_t { char sak[32]; } fal_rx_sak_t;
typedef unsigned int fal_rx_sc_validate_frame_e;
typedef struct _fal_tx_class_lut_t { int action, channel, valid; } fal_tx_class_lut_t;
typedef struct _fal_tx_ctl_filt_t { int bypass, ether_type_da_range, match_mask, match_type; } fal_tx_ctl_filt_t;
typedef struct _fal_tx_sak_t { char sak[32]; } fal_tx_sak_t;

int nss_macsec_secy_controlled_port_en_set() { return 0; }
int nss_macsec_secy_en_set() { return 0; }
int nss_macsec_secy_rx_ctl_filt_set() { return 0; }
int nss_macsec_secy_rx_prc_lut_set() { return 0; }
int nss_macsec_secy_rx_sa_create() { return 0; }
int nss_macsec_secy_rx_sa_en_set() { return 0; }
int nss_macsec_secy_rx_sak_set() { return 0; }
int nss_macsec_secy_rx_sa_next_pn_get() { return 0; }
int nss_macsec_secy_rx_sc_anti_replay_window_get() { return 0; }
int nss_macsec_secy_rx_sc_anti_replay_window_set() { return 0; }
int nss_macsec_secy_rx_sc_create() { return 0; }
int nss_macsec_secy_rx_sc_del() { return 0; }
int nss_macsec_secy_rx_sc_del_all() { return 0; }
int nss_macsec_secy_rx_sc_in_used_get() { return 0; }
int nss_macsec_secy_rx_sc_replay_protect_get() { return 0; }
int nss_macsec_secy_rx_sc_replay_protect_set() { return 0; }
int nss_macsec_secy_rx_sc_validate_frame_set() { return 0; }
int nss_macsec_secy_sc_sa_mapping_mode_set() { return 0; }
int nss_macsec_secy_tx_class_lut_set() { return 0; }
int nss_macsec_secy_tx_ctl_filt_set() { return 0; }
int nss_macsec_secy_tx_sa_en_set() { return 0; }
int nss_macsec_secy_tx_sak_set() { return 0; }
int nss_macsec_secy_tx_sa_next_pn_get() { return 0; }
int nss_macsec_secy_tx_sa_next_pn_set() { return 0; }
int nss_macsec_secy_tx_sc_an_set() { return 0; }
int nss_macsec_secy_tx_sc_confidentiality_offset_set() { return 0; }
int nss_macsec_secy_tx_sc_create() { return 0; }
int nss_macsec_secy_tx_sc_del() { return 0; }
int nss_macsec_secy_tx_sc_del_all() { return 0; }
int nss_macsec_secy_tx_sc_in_used_get() { return 0; }
int nss_macsec_secy_tx_sc_protect_set() { return 0; }
int nss_macsec_secy_tx_sc_tci_7_2_set() { return 0; }
