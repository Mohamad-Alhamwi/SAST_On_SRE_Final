
void FUN_00102b2c(void)

{
  return;
}




void FUN_00104400(void)

{
  return;
}




void FUN_00102d1a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001031d6(param_2);
  uVar2 = FUN_001031d6(param_1);
  FUN_001031e8(uVar2,uVar1,param_3);
  return;
}




long FUN_00103647(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_0010409a(void)

{
  return;
}




void FUN_00102ffc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ee0(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00102cc2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103155(param_2);
  uVar2 = FUN_00103155(param_1);
  FUN_001031a1(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101e4e(undefined8 param_1)

{
  FUN_00101e8e(param_1);
  return;
}




undefined8 FUN_001022d6(undefined8 param_1)

{
  return param_1;
}




void FUN_00104108(void)

{
  return;
}




void FUN_00101f2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102274(param_1);
  FUN_00102286(*param_1,param_1[1],uVar1);
  FUN_00101eda(param_1);
  return;
}




undefined8 FUN_0010335f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103448(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102286(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b6d(param_1,param_2);
  return;
}




undefined8 FUN_00102274(undefined8 param_1)

{
  return param_1;
}




void FUN_00104129(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001040dc(void)

{
  return;
}




void FUN_0010411e(void)

{
  return;
}




void FUN_00104324(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103c59(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001021d8(undefined8 param_1)

{
  FUN_00102b2c(param_1);
  return;
}




void FUN_00103a85(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103b34(param_1,2);
  printf((char *)*puVar1);
  return;
}




long FUN_0010233f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102bba(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102bba(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001040c6(void)

{
  return;
}




undefined8 FUN_00102ee0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103331(param_1,param_2);
  }
  return uVar1;
}




void FUN_00104113(void)

{
  return;
}




undefined8 FUN_001030dc(undefined8 param_1)

{
  return param_1;
}




void FUN_00101844(void)

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
  FUN_00101e6e(local_c8);
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
  local_d0 = FUN_00101f74(local_c8);
  FUN_00101fc4(local_a8,&local_d0);
                    /* try { // try from 00101955 to 00101a1a has its CatchHandler @ 00101a72 */
  FUN_00101ff2(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101f74(local_c8);
  FUN_00101fc4(local_a8,&local_d0);
  FUN_00101ff2(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101f74(local_c8);
  FUN_00101fc4(local_a8,&local_d0);
  FUN_00101ff2(local_c8,local_a8[0],1,&local_d8);
  FUN_001020b8(local_a8,local_c8);
                    /* try { // try from 00101a25 to 00101a29 has its CatchHandler @ 00101a5a */
  FUN_00103ac1(local_a8);
  FUN_00101f2c(local_a8);
  FUN_00101f2c(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d6a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103256(param_2);
  uVar2 = FUN_00103256(param_1);
  FUN_00103268(uVar2,uVar1,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




undefined8 FUN_0010402b(void)

{
  return 1;
}




void FUN_00103268(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103c84(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010222a(void)

{
  return;
}




void FUN_0010349b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103647(param_1,param_2,param_3);
  return;
}




void FUN_00104079(void)

{
  return;
}




void FUN_0010370b(undefined8 param_1)

{
  FUN_00103758(param_1);
  return;
}




void FUN_001031a1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103466(param_1,param_2,param_3);
  return;
}




void FUN_00104063(void)

{
  return;
}




void FUN_00103056(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033bf(param_1,param_2,param_3);
  return;
}




long FUN_00102956(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00102c2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001030c6(param_1);
  FUN_0010312b(*param_1,uVar1);
  return;
}




ulong * FUN_00103729(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102c60(undefined8 param_1)

{
  FUN_001030c6(param_1);
  return;
}




void FUN_001033f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001030dc(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101e17(8,param_2);
  *puVar2 = uVar1;
  return;
}




ulong FUN_00102df0(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001032dc(param_1);
  lVar2 = FUN_00102956(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102956(local_40);
  local_30 = FUN_00102956(local_40);
  plVar3 = (long *)FUN_00103302(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102956(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001032dc(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001032dc(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001021f8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_0010223a(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102b3b(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102a9e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102b98(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b7e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ec8)();
  return;
}




void FUN_00102b3b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010308c(param_1,param_2,param_3);
  return;
}




void FUN_00103331(undefined8 param_1,undefined8 param_2)

{
  FUN_00103580(param_1,param_2,0);
  return;
}




void FUN_00101eba(undefined8 param_1)

{
  FUN_0010222a(param_1);
  return;
}




void * FUN_00103a22(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00104390(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001040e7(void)

{
  return;
}




void FUN_00101eda(long *param_1)

{
  FUN_0010223a(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101e2e(param_1);
  return;
}




void FUN_00101aa2(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e8;
  undefined8 local_e0;
  size_t local_d8;
  FILE *local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e6e(local_c8);
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
  local_e8 = local_88;
  local_d8 = strlen(local_e8);
  if (1 < 100 - local_d8) {
                    /* try { // try from 00101b7c to 00101d15 has its CatchHandler @ 00101d6d */
    local_d0 = fopen("/tmp/file.txt","r");
    if (local_d0 != (FILE *)0x0) {
      pcVar1 = fgets(local_e8 + local_d8,100 - (int)local_d8,local_d0);
      if (pcVar1 == (char *)0x0) {
        FUN_00103b58("fgets() failed");
        local_e8[local_d8] = '\0';
      }
      fclose(local_d0);
    }
  }
  local_e0 = FUN_00101f74(local_c8);
  FUN_00101fc4(local_a8,&local_e0);
  FUN_00101ff2(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101f74(local_c8);
  FUN_00101fc4(local_a8,&local_e0);
  FUN_00101ff2(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101f74(local_c8);
  FUN_00101fc4(local_a8,&local_e0);
  FUN_00101ff2(local_c8,local_a8[0],1,&local_e8);
  FUN_001020b8(local_a8,local_c8);
                    /* try { // try from 00101d20 to 00101d24 has its CatchHandler @ 00101d55 */
  FUN_00103afd(local_a8);
  FUN_00101f2c(local_a8);
  FUN_00101f2c(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001038ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103975(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101f74(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022b4(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001035c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103770(param_2);
  uVar2 = FUN_00103770(param_1);
  FUN_00103782(uVar2,uVar1,param_3);
  return;
}




void FUN_00102fc6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f9c(param_1,param_2);
  FUN_001021f8(param_1);
  return;
}




void FUN_0010308c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010406e(void)

{
  return;
}




undefined8 FUN_0010297d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f6f(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 * FUN_00103840(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00104084(void)

{
  return;
}




void FUN_00102dbb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032a6(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001042ab(undefined8 *param_1)

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




int FUN_00104049(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101e6e(undefined8 param_1)

{
  FUN_00101e4e(param_1);
  return;
}




void FUN_00103bb0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_001034d0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103d5c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001022b4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101d9d(void)

{
  FUN_00101844();
  FUN_00101aa2();
  return;
}




undefined8 FUN_00103758(void)

{
  return 0xfffffffffffffff;
}




void FUN_00102384(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102df0(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001028a4(local_80);
      local_60 = FUN_00102c7e(&local_88,&local_78);
      local_70 = FUN_00102ee0(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00102274(local_80);
                    /* try { // try from 0010268e to 00102719 has its CatchHandler @ 001027d1 */
      FUN_00102dbb(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00102274(local_80);
      puVar2 = (undefined8 *)FUN_001022d6(&local_88);
      local_70 = FUN_00102f17(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00102274(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001022d6(&local_88);
      local_70 = FUN_00102f17(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00102274(local_80);
      FUN_00102286(*local_80,local_80[1],uVar1);
      FUN_0010223a(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102bcc(local_38,param_1,param_4);
                    /* try { // try from 0010240e to 001025e1 has its CatchHandler @ 001027b3 */
      local_50 = FUN_00102c60(local_38);
      local_78 = FUN_00101f74(local_80);
      local_48 = FUN_00102c7e(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00102274(local_80);
        FUN_00102cc2(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_001022d6(&local_88);
        FUN_00102d1a(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001022d6(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001022d6(&local_88);
        FUN_00102d6a(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00102274(local_80);
        lVar4 = FUN_00102dbb(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00102274(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001022d6(&local_88);
        FUN_00102cc2(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_001022d6(&local_88);
        FUN_00102d6a(*puVar2,local_40,local_50);
      }
      FUN_00102c2c(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104362(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102f17(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010335f(param_2);
  uVar2 = FUN_0010335f(param_1);
  FUN_001031a1(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102b98(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102a46(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102b98(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103466(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103616(param_1,param_2,param_3);
  return;
}




void FUN_001040d1(void)

{
  return;
}




void FUN_001031e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103256(param_3);
  uVar2 = FUN_00103256(local_28);
  uVar3 = FUN_00103256(local_20);
  uVar1 = FUN_0010349b(uVar3,uVar2,uVar1);
  FUN_001034d0(&local_30,uVar1);
  return;
}




bool FUN_0010422d(pthread_t *param_1)

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




void FUN_00101ff2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_001022e8(param_1);
  local_18 = FUN_0010233f(&local_38,&local_20);
  local_20 = FUN_001028a4(local_30);
  uVar1 = FUN_001028f0(&local_20,local_18);
  FUN_00102384(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001028a4(local_30);
  FUN_001028f0(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e2e(undefined8 param_1)

{
  FUN_00101eba(param_1);
  return;
}




void FUN_001034e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036bd(param_1,param_2,param_3);
  return;
}




void FUN_00102bcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_001030dc(param_3);
  uVar2 = FUN_001030c6(param_1);
  FUN_001030ee(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103d34(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00104288(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001037f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001038e1(param_2);
  uVar2 = FUN_001038e1(param_1);
  FUN_00103907(uVar2,uVar1,param_3);
  return;
}




void FUN_001032dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ce(param_1);
  FUN_00103517(uVar1);
  return;
}




undefined8 FUN_001039d8(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001030b3(void)

{
  return;
}




undefined8 FUN_00103770(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001029ce(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00101fc4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001022d6(param_2);
  *param_1 = *puVar1;
  return;
}




long FUN_00102c7e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001022d6(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001022d6(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103bd8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103b58(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00103517(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010370b(param_1);
  puVar1 = (undefined8 *)FUN_00103729(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001040f2(void)

{
  return;
}




void FUN_00103616(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001037f0(param_1,param_2,param_3);
  return;
}




void FUN_00104343(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103782(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103256(param_3);
  uVar2 = FUN_0010388b(local_28);
  uVar3 = FUN_0010388b(local_20);
  uVar1 = FUN_001038ac(uVar3,uVar2,uVar1);
  FUN_001034d0(&local_30,uVar1);
  return;
}




void FUN_001040b0(void)

{
  return;
}




ulong FUN_00103e48(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050c8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103434(void)

{
  return;
}




undefined8 FUN_001022e8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102b98(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010403a(void)

{
  return 0;
}




undefined8 FUN_00103155(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103448(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001038e1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001039d8(&local_10);
  FUN_001031d6(uVar1);
  return;
}




void FUN_00103caf(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001032a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034e6(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101490();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_0010408f(void)

{
  return;
}




long FUN_00103b34(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00103db5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102f6f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f9c(param_1,param_2);
  return param_1;
}




void FUN_001029e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fc6(param_1,param_3);
                    /* try { // try from 00102a1a to 00102a1e has its CatchHandler @ 00102a21 */
  FUN_00102ffc(param_1,param_2);
  return;
}




void FUN_001033bf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035c6(param_1,param_2,param_3);
  return;
}




void FUN_001040a5(void)

{
  return;
}




void FUN_00103448(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_001030c6(long param_1)

{
  return param_1 + 8;
}




ulong * FUN_00103302(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00101549(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e8;
  undefined8 local_e0;
  size_t local_d8;
  FILE *local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e6e(local_c8);
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
  local_e8 = local_88;
  local_d8 = strlen(local_e8);
  if (1 < 100 - local_d8) {
                    /* try { // try from 00101623 to 001017bc has its CatchHandler @ 00101814 */
    local_d0 = fopen("/tmp/file.txt","r");
    if (local_d0 != (FILE *)0x0) {
      pcVar1 = fgets(local_e8 + local_d8,100 - (int)local_d8,local_d0);
      if (pcVar1 == (char *)0x0) {
        FUN_00103b58("fgets() failed");
        local_e8[local_d8] = '\0';
      }
      fclose(local_d0);
    }
  }
  local_e0 = FUN_00101f74(local_c8);
  FUN_00101fc4(local_a8,&local_e0);
  FUN_00101ff2(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101f74(local_c8);
  FUN_00101fc4(local_a8,&local_e0);
  FUN_00101ff2(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101f74(local_c8);
  FUN_00101fc4(local_a8,&local_e0);
  FUN_00101ff2(local_c8,local_a8[0],1,&local_e8);
  FUN_001020b8(local_a8,local_c8);
                    /* try { // try from 001017c7 to 001017cb has its CatchHandler @ 001017fc */
  FUN_00103a85(local_a8);
  FUN_00101f2c(local_a8);
  FUN_00101f2c(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001029ce(param_2);
  FUN_0010297d(&local_31,uVar1);
  uVar1 = FUN_00102956(param_2);
                    /* try { // try from 0010211e to 00102122 has its CatchHandler @ 0010218b */
  FUN_001029e0(param_1,uVar1,&local_31);
  FUN_00101eba(&local_31);
  uVar2 = FUN_00102274(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102a9e(param_2);
  uVar4 = FUN_00102a46(param_2);
                    /* try { // try from 0010216c to 00102170 has its CatchHandler @ 001021a9 */
  uVar1 = FUN_00102af6(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104160(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104129,local_18);
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




undefined8 FUN_001028f0(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_001022b4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c04(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103d87(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102af6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103056(param_1,param_2,param_3);
  return;
}




ulong FUN_00103f4c(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050d0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001040bb(void)

{
  return;
}




undefined8 FUN_00102bba(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101db2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b58("Calling good()...");
  FUN_00101d9d();
  FUN_00103b58("Finished good()");
  FUN_00103b58("Calling bad()...");
  FUN_00101549();
  FUN_00103b58("Finished bad()");
  return 0;
}




undefined8 FUN_00103256(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c2e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001039ed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103a22(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010388b(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102bba(&local_10);
  return *puVar1;
}




void FUN_001040fd(void)

{
  return;
}




undefined8 FUN_001031d6(undefined8 param_1)

{
  return param_1;
}




void * FUN_00103975(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001033ac(void)

{
  return;
}




void FUN_0010312b(undefined8 param_1,undefined8 param_2)

{
  FUN_00103434(param_1,param_2);
  return;
}




void FUN_00102b6d(undefined8 param_1,undefined8 param_2)

{
  FUN_001030b3(param_1,param_2);
  return;
}




void FUN_001036bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103256(param_1);
  uVar1 = FUN_00103840(uVar1,param_2,param_3);
  FUN_001034d0(&local_10,uVar1);
  return;
}




void FUN_00103cda(undefined4 param_1)

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




void FUN_00103907(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103256(param_3);
  uVar2 = FUN_00103256(local_28);
  uVar3 = FUN_00103256(local_20);
  uVar1 = FUN_001039ed(uVar3,uVar2,uVar1);
  FUN_001034d0(&local_30,uVar1);
  return;
}




void FUN_00103afd(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103b34(param_1,2);
  puts((char *)*puVar1);
  return;
}




undefined8 FUN_001028a4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022b4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103de8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103ac1(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103b34(param_1,2);
  printf((char *)*puVar1);
  return;
}




void FUN_00102f9c(undefined8 param_1,undefined8 param_2)

{
  FUN_001033ac(param_1,param_2);
  return;
}




undefined8 FUN_00101e17(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001030ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001030dc(param_3);
  FUN_001033f0(param_1,param_2,uVar1);
  return;
}




void FUN_00103580(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103758(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00101e8e(undefined8 param_1)

{
  FUN_001021d8(param_1);
  FUN_001021f8(param_1);
  return;
}



