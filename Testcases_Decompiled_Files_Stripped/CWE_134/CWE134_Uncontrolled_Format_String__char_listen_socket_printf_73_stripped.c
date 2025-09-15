
int FUN_0010309c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101f48(undefined8 param_1)

{
  FUN_00101ff4(param_1);
  return;
}




void FUN_001030b6(void)

{
  return;
}




void FUN_00103450(void)

{
  return;
}




void FUN_00103377(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001024f2(param_3);
  p_Var2 = (_List_node_base *)FUN_00102504(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001025ce(param_1,1);
  return;
}




void FUN_001024a4(undefined8 param_1,undefined8 param_2)

{
  FUN_001027ad(param_1,param_2,1);
  return;
}




void FUN_0010283e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001027ad(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001028dc(void)

{
  return;
}




void FUN_00102304(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102650(param_2);
  FUN_00102662(param_1,uVar1);
  return;
}




void FUN_00102804(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102979(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_0010307e(void)

{
  return 1;
}




void FUN_0010277c(undefined8 param_1)

{
  FUN_00102912(param_1);
  return;
}




void FUN_0010191f(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f88(local_c8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_d0 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
                    /* try { // try from 001019f5 to 00101a44 has its CatchHandler @ 00101a9c */
  FUN_00102040(local_c8,&local_d0);
  FUN_00102040(local_c8,&local_d0);
  FUN_00102040(local_c8,&local_d0);
  FUN_0010207a(local_a8,local_c8);
                    /* try { // try from 00101a4f to 00101a53 has its CatchHandler @ 00101a84 */
  FUN_00102a9f(local_a8);
  FUN_00101fa8(local_a8);
  FUN_00101fa8(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102cac(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102cd7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102d02(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102166(void)

{
  return;
}




void FUN_0010315b(void)

{
  return;
}




void FUN_00102014(undefined8 param_1)

{
  FUN_00102176(param_1);
  FUN_00101f48(param_1);
  return;
}




void FUN_00102446(long param_1)

{
  FUN_0010277c(param_1 + 0x10);
  return;
}




void FUN_00102146(undefined8 param_1)

{
  FUN_00102436(param_1);
  return;
}




void FUN_00101ef2(undefined8 param_1)

{
  FUN_00101f12(param_1);
  return;
}




void FUN_001025ce(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101589(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_fc;
  char *local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined local_b8 [32];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f88(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f0 = local_88;
  local_fc = -1;
  local_e8 = strlen(local_f0);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 00101713 to 00101897 has its CatchHandler @ 001018ef */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_fc = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_fc != -1)) {
      sVar2 = recv(local_fc,local_f0 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f0[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f0,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f0,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_fc != -1) {
    close(local_fc);
  }
  FUN_00102040(local_d8,&local_f0);
  FUN_00102040(local_d8,&local_f0);
  FUN_00102040(local_d8,&local_f0);
  FUN_0010207a(local_b8,local_d8);
                    /* try { // try from 001018a2 to 001018a6 has its CatchHandler @ 001018d7 */
  FUN_00102a68(local_b8);
  FUN_00101fa8(local_b8);
  FUN_00101fa8(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101acc(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_fc;
  char *local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined local_b8 [32];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f88(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f0 = local_88;
  local_fc = -1;
  local_e8 = strlen(local_f0);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 00101c56 to 00101dda has its CatchHandler @ 00101e32 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_fc = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_fc != -1)) {
      sVar2 = recv(local_fc,local_f0 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f0[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f0,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f0,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_fc != -1) {
    close(local_fc);
  }
  FUN_00102040(local_d8,&local_f0);
  FUN_00102040(local_d8,&local_f0);
  FUN_00102040(local_d8,&local_f0);
  FUN_0010207a(local_b8,local_d8);
                    /* try { // try from 00101de5 to 00101de9 has its CatchHandler @ 00101e1a */
  FUN_00102ad6(local_b8);
  FUN_00101fa8(local_b8);
  FUN_00101fa8(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001027e0(undefined8 param_1)

{
  FUN_0010294b(param_1,1);
  return;
}




void FUN_0010287d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024f2(param_3);
  FUN_0010298c(param_1,param_2,uVar1);
  return;
}




void FUN_00102626(undefined8 param_1,undefined8 param_2)

{
  FUN_001028dc(param_1,param_2);
  return;
}




undefined8 FUN_00101e77(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102bab("Calling good()...");
  FUN_00101e62();
  FUN_00102bab("Finished good()");
  FUN_00102bab("Calling bad()...");
  FUN_00101589();
  FUN_00102bab("Finished bad()");
  return 0;
}




void FUN_00102b08(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001021f4(param_1);
  FUN_00102b66(&local_18);
  FUN_00102b8a(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e08(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103103(void)

{
  return;
}




undefined8 FUN_001031b3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010317c,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00102a68(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b08(param_1);
  printf((char *)*puVar1);
  return;
}




undefined8 FUN_00102650(undefined8 param_1)

{
  return param_1;
}




void FUN_0010294b(undefined8 param_1,undefined8 param_2)

{
  FUN_001029ee(param_1,param_2,0);
  return;
}




void FUN_00102924(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102176(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00102446(local_20);
    uVar3 = FUN_00102468(param_1);
    FUN_0010247a(uVar3,uVar2);
    FUN_001024a4(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




long * FUN_00102b66(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102bab(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010270c(undefined8 *param_1)

{
  FUN_001028f0(*param_1);
  return;
}




undefined8 FUN_0010233c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001026a4(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 * FUN_001026e8(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00103166(void)

{
  return;
}




void FUN_00102daf(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102d87(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101edc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010298c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001024f2(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101edc(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010310e(void)

{
  return;
}




undefined8 FUN_001032fe(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_0010272e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001024f2(param_2);
  uVar2 = FUN_001021f4(param_1);
  FUN_00102240(param_1,uVar2,uVar1);
  return;
}




void FUN_001023d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_001026c2(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010270c(&local_18);
    FUN_0010272e(local_10,uVar2);
    FUN_001026e8(&local_18);
  }
  return;
}




void FUN_00101f68(undefined8 param_1)

{
  FUN_00101fc8(param_1);
  return;
}




void FUN_001030f8(void)

{
  return;
}




void FUN_00103145(void)

{
  return;
}




void FUN_001030c1(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101524) */
/* WARNING: Removing unreachable block (ram,0x00101530) */

void FUN_00101500(void)

{
  return;
}




void FUN_0010279a(void)

{
  return;
}




undefined8 FUN_001032db(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001030ed(void)

{
  return;
}




undefined8 FUN_00102979(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010238c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001026a4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102dda(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010313a(void)

{
  return;
}




void FUN_00101fc8(undefined8 param_1)

{
  FUN_00102146(param_1);
  FUN_00101ef2(param_1);
  return;
}




void FUN_00103396(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102436(void)

{
  return;
}




void FUN_00101e62(void)

{
  FUN_0010191f();
  FUN_00101acc();
  return;
}




ulong FUN_00102e9b(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00104090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001025f8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102626(param_1,param_2);
  return param_1;
}




void FUN_00102c81(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010317c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102e3b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001022f2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001024f2(undefined8 param_1)

{
  return param_1;
}




void FUN_001028f0(long param_1)

{
  FUN_001029d0(param_1 + 0x10);
  return;
}




undefined8 FUN_00102912(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ff4(undefined8 param_1)

{
  FUN_00102166(param_1);
  return;
}




void FUN_001030e2(void)

{
  return;
}




void FUN_00103119(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_001014d0();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_0010247a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010279a(param_1,param_2);
  return;
}




void FUN_00102662(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102650(param_2);
  FUN_00102626(param_1,uVar1);
  FUN_00101ef2(param_1);
  return;
}




undefined8 FUN_001026c2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_00102468(undefined8 param_1)

{
  return param_1;
}




void FUN_001024d4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102ad6(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b08(param_1);
  puts((char *)*puVar1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106eb8)();
  return;
}




void FUN_00101f12(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001027ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102924(param_1,param_2,param_3);
  return;
}




void FUN_00102c03(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001030d7(void)

{
  return;
}




void FUN_00102a9f(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b08(param_1);
  printf((char *)*puVar1);
  return;
}




void FUN_001030cc(void)

{
  return;
}




void FUN_00101f88(undefined8 param_1)

{
  FUN_00101f68(param_1);
  return;
}




void FUN_001026a4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103150(void)

{
  return;
}




void FUN_00102bd1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102a50(void)

{
  return 0x555555555555555;
}




void FUN_00102b8a(undefined8 *param_1)

{
  FUN_00102446(*param_1);
  return;
}




void FUN_00102c2b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00102f9f(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00104098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_00103280(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00103124(void)

{
  return;
}




undefined8 FUN_0010308d(void)

{
  return 0;
}




void FUN_00103171(void)

{
  return;
}




undefined8 FUN_001022a1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001025f8(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001029ee(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102a50(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102c57(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




long FUN_001028ba(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




undefined8 FUN_001021f4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001024d4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101fa8(undefined8 param_1)

{
  FUN_00102014(param_1);
  return;
}




void FUN_00102d2d(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010312f(void)

{
  return;
}




void FUN_001033e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e3) */
/* WARNING: Removing unreachable block (ram,0x001014ef) */

void FUN_001014d0(void)

{
  return;
}




void FUN_001029d0(undefined8 param_1)

{
  FUN_00102a3e(param_1);
  return;
}




void FUN_001033b5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102a3e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010207a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001022f2(param_2);
  FUN_001022a1(&local_21,uVar1);
  FUN_00102304(param_1,&local_21);
  FUN_00101ff4(&local_21);
  uVar1 = FUN_0010238c(param_2);
  uVar2 = FUN_0010233c(param_2);
                    /* try { // try from 00102106 to 0010210a has its CatchHandler @ 0010210d */
  FUN_001023d8(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102040(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021f4(param_1);
  FUN_00102240(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_00102504(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001027e0(param_1);
  uVar2 = FUN_00102468(param_1);
  FUN_00102804(local_38,uVar2,uVar1);
  uVar3 = FUN_001024f2(param_2);
  uVar4 = FUN_00102446(uVar1);
  FUN_0010287d(uVar2,uVar4,uVar3);
  FUN_001028ba(local_38,0);
  FUN_0010283e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



