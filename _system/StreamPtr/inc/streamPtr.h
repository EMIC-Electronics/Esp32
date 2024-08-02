/*************************************************************************//**  @file     stream.h  @brief    Util Stream Library  @author   Pentacolo Tomas  @date     30/03/2023  @version  v0.0.1   Initial release. ******************************************************************************/typedef struct streamPtr_S{  uint16_t data_idx_entr;  uint16_t data_idx_sal;  uint16_t data_idx_sal_aux;  uint16_t data_count_entr;  uint16_t data_count_sal;  uint16_t data_count_sal_aux;  uint16_t frame_idx_entr;  uint16_t frame_idx_sal;  uint16_t frame_count;  uint16_t* frame_fifo;  void**  data_fifo;  const uint16_t data_idx_mask;  const uint16_t frame_idx_mask;} streamPtr_t;