void _start(void)
{
  /* 
   * put the data and bss initialization here:
   * 
   * memcpy(&data_rom, &data_ram,data_len);
   * memset(&bss_ram,0,bss_len);
   * 
   *
   */
     
  main();

  while(1);  
}
