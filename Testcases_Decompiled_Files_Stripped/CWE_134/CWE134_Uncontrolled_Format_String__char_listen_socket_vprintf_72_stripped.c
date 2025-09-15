
void FUN_00104c7f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_001045ce(param_3);
  uVar2 = FUN_001045ce(local_28);
  uVar3 = FUN_001045ce(local_20);
  uVar1 = FUN_00104d65(uVar3,uVar2,uVar1);
  FUN_00104848(&local_30,uVar1);
  return;
}




void FUN_00105021(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vprintf("%s",&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103d46(undefined8 param_1)

{
  return param_1;
}




void FUN_001047ac(void)

{
  return;
}




void FUN_00102629(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_104;
  char *local_f8;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined8 local_b8 [4];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031e6(local_d8);
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
  local_f8 = local_88;
  local_104 = -1;
  local_e8 = strlen(local_f8);
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
                    /* try { // try from 001027b3 to 001029e8 has its CatchHandler @ 00102a40 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_104 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_104 != -1)) {
      sVar2 = recv(local_104,local_f8 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f8[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f8,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f8,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_104 != -1) {
    close(local_104);
  }
  local_f0 = FUN_001032ec(local_d8);
  FUN_0010333c(local_b8,&local_f0);
  FUN_0010336a(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001032ec(local_d8);
  FUN_0010333c(local_b8,&local_f0);
  FUN_0010336a(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001032ec(local_d8);
  FUN_0010333c(local_b8,&local_f0);
  FUN_0010336a(local_d8,local_b8[0],1,&local_f8);
  FUN_00103430(local_b8,local_d8);
                    /* try { // try from 001029f3 to 001029f7 has its CatchHandler @ 00102a28 */
  FUN_00104ecc(local_b8);
  FUN_001032a4(local_b8);
  FUN_001032a4(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_001049bf(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_001052d6(undefined4 param_1)

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




void FUN_0010522a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103570(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00105636(void)

{
  return 0;
}




ulong * FUN_00104aa1(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00105330(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010488f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00104a83(param_1);
  puVar1 = (undefined8 *)FUN_00104aa1(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00104a83(undefined8 param_1)

{
  FUN_00104ad0(param_1);
  return;
}




undefined8 * FUN_00104bb8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00105255(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010442b(void)

{
  return;
}




void FUN_001053e4(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00104133(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010461e(param_1,param_2,param_3);
  return;
}




void * FUN_00104ced(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00105704(void)

{
  return;
}




void FUN_001056ac(void)

{
  return;
}




void FUN_001052ab(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00105154(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00104848(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108e90)();
  return;
}




void FUN_00104a35(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001045ce(param_1);
  uVar1 = FUN_00104bb8(uVar1,param_2,param_3);
  FUN_00104848(&local_10,uVar1);
  return;
}




undefined8 FUN_0010318f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010461e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010485e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001032ec(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010362c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_0010443e(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00103660(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103f10(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104724(void)

{
  return;
}




undefined8 FUN_00103dbe(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103f10(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105725(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00104d50(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103206(undefined8 param_1)

{
  FUN_00103550(param_1);
  FUN_00103570(param_1);
  return;
}




void FUN_001046a9(undefined8 param_1,undefined8 param_2)

{
  FUN_001048f8(param_1,param_2,0);
  return;
}




void FUN_00102a70(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
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
  FUN_001031e6(local_c8);
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
  local_d8 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_d0 = FUN_001032ec(local_c8);
  FUN_0010333c(local_a8,&local_d0);
                    /* try { // try from 00102b81 to 00102c46 has its CatchHandler @ 00102c9e */
  FUN_0010336a(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_001032ec(local_c8);
  FUN_0010333c(local_a8,&local_d0);
  FUN_0010336a(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_001032ec(local_c8);
  FUN_0010333c(local_a8,&local_d0);
  FUN_0010336a(local_c8,local_a8[0],1,&local_d8);
  FUN_00103430(local_a8,local_c8);
                    /* try { // try from 00102c51 to 00102c55 has its CatchHandler @ 00102c86 */
  FUN_00104fde(local_a8);
  FUN_001032a4(local_a8);
  FUN_001032a4(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104dfd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vprintf(param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103e16(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00103f10(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001035ec(undefined8 param_1)

{
  return param_1;
}




void * FUN_00104d9a(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00104314(undefined8 param_1,undefined8 param_2)

{
  FUN_00104724(param_1,param_2);
  return;
}




void FUN_00105920(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103550(undefined8 param_1)

{
  FUN_00103ea4(param_1);
  return;
}




void FUN_00105383(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001040e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001045ce(param_2);
  uVar2 = FUN_001045ce(param_1);
  FUN_001045e0(uVar2,uVar1,param_3);
  return;
}




void FUN_00104c59(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104d50(&local_10);
  FUN_0010454e(uVar1);
  return;
}




void FUN_001048f8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00104ad0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00104d65(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104d9a(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001058a7(undefined8 *param_1)

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




void FUN_00103f44(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00104454(param_3);
  uVar2 = FUN_0010443e(param_1);
  FUN_00104466(*param_1,uVar2,uVar1);
  return;
}




long FUN_00103cce(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001056b7(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102570();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_0010565f(void)

{
  return;
}




void FUN_0010593f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102cce(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_104;
  char *local_f8;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined8 local_b8 [4];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031e6(local_d8);
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
  local_f8 = local_88;
  local_104 = -1;
  local_e8 = strlen(local_f8);
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
                    /* try { // try from 00102e58 to 0010308d has its CatchHandler @ 001030e5 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_104 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_104 != -1)) {
      sVar2 = recv(local_104,local_f8 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f8[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f8,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f8,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_104 != -1) {
    close(local_104);
  }
  local_f0 = FUN_001032ec(local_d8);
  FUN_0010333c(local_b8,&local_f0);
  FUN_0010336a(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001032ec(local_d8);
  FUN_0010333c(local_b8,&local_f0);
  FUN_0010336a(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001032ec(local_d8);
  FUN_0010333c(local_b8,&local_f0);
  FUN_0010336a(local_d8,local_b8[0],1,&local_f8);
  FUN_00103430(local_b8,local_d8);
                    /* try { // try from 00103098 to 0010309c has its CatchHandler @ 001030cd */
  FUN_001050ed(local_b8);
  FUN_001032a4(local_b8);
  FUN_001032a4(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00105444(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001046d7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001047c0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00105627(void)

{
  return 1;
}




void FUN_00103f10(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00104737(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010493e(param_1,param_2,param_3);
  return;
}




void FUN_00105280(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




long FUN_00105130(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00104b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104c59(param_2);
  uVar2 = FUN_00104c59(param_1);
  FUN_00104c7f(uVar2,uVar1,param_3);
  return;
}




ulong * FUN_0010467a(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00105696(void)

{
  return;
}




void FUN_001056a1(void)

{
  return;
}




void FUN_0010433e(undefined8 param_1,undefined8 param_2)

{
  FUN_00104314(param_1,param_2);
  FUN_00103570(param_1);
  return;
}




long FUN_001036b7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103f32(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103f32(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_001044cd(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001047c0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010571a(void)

{
  return;
}




void FUN_001056f9(void)

{
  return;
}




void FUN_00103e6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001043ce(param_1,param_2,param_3);
  return;
}




void FUN_00104c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104ced(param_1,param_2,param_3);
  return;
}




void FUN_0010568b(void)

{
  return;
}




undefined8 FUN_0010364e(undefined8 param_1)

{
  return param_1;
}




void FUN_001056ee(void)

{
  return;
}




void FUN_0010485e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104a35(param_1,param_2,param_3);
  return;
}




void FUN_001053b1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103252(long *param_1)

{
  FUN_001035b2(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001031a6(param_1);
  return;
}




undefined8 FUN_00104ae8(undefined8 param_1)

{
  return param_1;
}




bool FUN_00105829(pthread_t *param_1)

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




ulong FUN_00105548(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001036fc(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_00104168(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103c1c(local_80);
      local_60 = FUN_00103ff6(&local_88,&local_78);
      local_70 = FUN_00104258(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001035ec(local_80);
                    /* try { // try from 00103a06 to 00103a91 has its CatchHandler @ 00103b49 */
      FUN_00104133(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001035ec(local_80);
      puVar2 = (undefined8 *)FUN_0010364e(&local_88);
      local_70 = FUN_0010428f(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_001035ec(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_0010364e(&local_88);
      local_70 = FUN_0010428f(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001035ec(local_80);
      FUN_001035fe(*local_80,local_80[1],uVar1);
      FUN_001035b2(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00103f44(local_38,param_1,param_4);
                    /* try { // try from 00103786 to 00103959 has its CatchHandler @ 00103b2b */
      local_50 = FUN_00103fd8(local_38);
      local_78 = FUN_001032ec(local_80);
      local_48 = FUN_00103ff6(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001035ec(local_80);
        FUN_0010403a(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_0010364e(&local_88);
        FUN_00104092(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_0010364e(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_0010364e(&local_88);
        FUN_001040e2(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_001035ec(local_80);
        lVar4 = FUN_00104133(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001035ec(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_0010364e(&local_88);
        FUN_0010403a(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_0010364e(&local_88);
        FUN_001040e2(*puVar2,local_40,local_50);
      }
      FUN_00103fa4(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001044a3(undefined8 param_1,undefined8 param_2)

{
  FUN_001047ac(param_1,param_2);
  return;
}




void FUN_00104afa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_001045ce(param_3);
  uVar2 = FUN_00104c03(local_28);
  uVar3 = FUN_00104c03(local_20);
  uVar1 = FUN_00104c24(uVar3,uVar2,uVar1);
  FUN_00104848(&local_30,uVar1);
  return;
}




void FUN_00105200(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103ee5(undefined8 param_1,undefined8 param_2)

{
  FUN_0010442b(param_1,param_2);
  return;
}




void FUN_0010336a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00103660(param_1);
  local_18 = FUN_001036b7(&local_38,&local_20);
  local_20 = FUN_00103c1c(local_30);
  uVar1 = FUN_00103c68(&local_20,local_18);
  FUN_001036fc(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103c1c(local_30);
  FUN_00103c68(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010403a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001044cd(param_2);
  uVar2 = FUN_001044cd(param_1);
  FUN_00104519(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103115(void)

{
  FUN_00102a70();
  FUN_00102cce();
  return;
}




void FUN_00103ea4(void)

{
  return;
}




void FUN_00105990(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00105a00(void)

{
  return;
}




void FUN_00104374(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00104258(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_001042e7(undefined8 param_1,undefined8 param_2)

{
  FUN_00104314(param_1,param_2);
  return param_1;
}




undefined8 FUN_00103c1c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010362c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010493e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104ae8(param_2);
  uVar2 = FUN_00104ae8(param_1);
  FUN_00104afa(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103cf5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001042e7(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00104c03(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00103f32(&local_10);
  return *puVar1;
}




void FUN_0010517a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103eb3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104404(param_1,param_2,param_3);
  return;
}




void FUN_001047de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010498e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001045ce(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00105884(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001035fe(undefined8 param_1,undefined8 param_2)

{
  FUN_00103ee5(param_1,param_2);
  return;
}




void FUN_00104654(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103d46(param_1);
  FUN_0010488f(uVar1);
  return;
}




void FUN_001031e6(undefined8 param_1)

{
  FUN_001031c6(param_1);
  return;
}




void FUN_00105675(void)

{
  return;
}




void FUN_00103fa4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010443e(param_1);
  FUN_001044a3(*param_1,uVar1);
  return;
}




undefined8 FUN_00104454(undefined8 param_1)

{
  return param_1;
}




void FUN_0010333c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010364e(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00104768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00104454(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010318f(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010428f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001046d7(param_2);
  uVar2 = FUN_001046d7(param_1);
  FUN_00104519(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_0010454e(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}




void FUN_001035b2(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00103eb3(param_1,param_2,param_3);
  }
  return;
}




void FUN_001047c0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001056cd(void)

{
  return;
}




void FUN_0010362c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_0010312a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00105154("Calling good()...");
  FUN_00103115();
  FUN_00105154("Finished good()");
  FUN_00105154("Calling bad()...");
  FUN_00102629();
  FUN_00105154("Finished bad()");
  return 0;
}




void FUN_00103430(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103d46(param_2);
  FUN_00103cf5(&local_31,uVar1);
  uVar1 = FUN_00103cce(param_2);
                    /* try { // try from 00103496 to 0010349a has its CatchHandler @ 00103503 */
  FUN_00103d58(param_1,uVar1,&local_31);
  FUN_00103232(&local_31);
  uVar2 = FUN_001035ec(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00103e16(param_2);
  uVar4 = FUN_00103dbe(param_2);
                    /* try { // try from 001034e4 to 001034e8 has its CatchHandler @ 00103521 */
  uVar1 = FUN_00103e6e(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104ad0(void)

{
  return 0xfffffffffffffff;
}




void FUN_00105680(void)

{
  return;
}




void FUN_001043ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104737(param_1,param_2,param_3);
  return;
}




void FUN_001056e3(void)

{
  return;
}




void FUN_00104ecc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00105130(param_1,2);
  FUN_00104dfd(*puVar1,*puVar1);
  return;
}




void FUN_00104519(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001047de(param_1,param_2,param_3);
  return;
}




void FUN_001051d4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001045e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00104813(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001049bf(param_1,param_2,param_3);
  return;
}




void FUN_0010570f(void)

{
  return;
}




void FUN_001032a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001035ec(param_1);
  FUN_001035fe(*param_1,param_1[1],uVar1);
  FUN_00103252(param_1);
  return;
}




void FUN_0010566a(void)

{
  return;
}




void FUN_001050ed(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00105130(param_1,2);
  FUN_00105021(*puVar1,*puVar1);
  return;
}




void FUN_00104404(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00104092(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010454e(param_2);
  uVar2 = FUN_0010454e(param_1);
  FUN_00104560(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103f32(undefined8 param_1)

{
  return param_1;
}




void FUN_001056c2(void)

{
  return;
}




void FUN_0010498e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104b68(param_1,param_2,param_3);
  return;
}




void FUN_00103232(undefined8 param_1)

{
  FUN_001035a2(param_1);
  return;
}




long FUN_00103ff6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010364e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010364e(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001035a2(void)

{
  return;
}




int FUN_00105645(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001031c6(undefined8 param_1)

{
  FUN_00103206(param_1);
  return;
}




void FUN_001051ac(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00105358(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010433e(param_1,param_3);
                    /* try { // try from 00103d92 to 00103d96 has its CatchHandler @ 00103d99 */
  FUN_00104374(param_1,param_2);
  return;
}




void FUN_00104466(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104454(param_3);
  FUN_00104768(param_1,param_2,uVar1);
  return;
}




void FUN_00103fd8(undefined8 param_1)

{
  FUN_0010443e(param_1);
  return;
}




undefined8 FUN_00104258(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001046a9(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_0010575c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00105725,local_18);
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




void FUN_001056d8(void)

{
  return;
}




void FUN_00104fde(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00105130(param_1,2);
  FUN_00104f0f(*puVar1,*puVar1);
  return;
}




void FUN_00104560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_001045ce(param_3);
  uVar2 = FUN_001045ce(local_28);
  uVar3 = FUN_001045ce(local_20);
  uVar1 = FUN_00104813(uVar3,uVar2,uVar1);
  FUN_00104848(&local_30,uVar1);
  return;
}




ulong FUN_00104168(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00104654(param_1);
  lVar2 = FUN_00103cce(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00103cce(local_40);
  local_30 = FUN_00103cce(local_40);
  plVar3 = (long *)FUN_0010467a(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00103cce(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00104654(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00104654(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010595e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




void FUN_001031a6(undefined8 param_1)

{
  FUN_00103232(param_1);
  return;
}




undefined8 FUN_00103c68(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_0010362c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104f0f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vprintf(param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



