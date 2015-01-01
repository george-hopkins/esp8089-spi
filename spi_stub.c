/*
 * Copyright (c) 2014 George Hopkins
 *
 * SPI stub code
 */
 
#define SPI_FREQ 0 // default speed

#define CMD_RESP_SIZE 1
#define DATA_RESP_SIZE_R 1
#define DATA_RESP_SIZE_W 1

#define BLOCK_R_DATA_RESP_SIZE_1ST   1
#define BLOCK_R_DATA_RESP_SIZE_EACH  1
#define BLOCK_W_DATA_RESP_SIZE_EACH  1
#define BLOCK_W_DATA_RESP_SIZE_FINAL 1

struct spi_device_id esp_spi_id[] = {
    {"esp8089", 0 },
    {}
};

int sif_platform_irq_init(void)
{
    return 0;
}

void sif_platform_irq_deinit(void)
{
}

int sif_platform_get_irq_no(void)
{
    return -ENXIO;
}

int sif_platform_is_irq_occur(void)
{
    return 0;
}

void sif_platform_irq_mask(int enable_mask)
{
}
