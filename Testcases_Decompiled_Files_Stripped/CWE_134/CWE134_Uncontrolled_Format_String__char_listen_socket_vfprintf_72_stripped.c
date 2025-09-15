
void FUN_001043a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104839(param_2);
  uVar2 = FUN_00104839(param_1);
  FUN_00104885(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001046aa(undefined8 param_1,undefined8 param_2)

{
  FUN_00104680(param_1,param_2);
  FUN_001038dc(param_1);
  return;
}




undefined8 FUN_001039ba(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010412a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010427c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001048cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010493a(param_3);
  uVar2 = FUN_0010493a(local_28);
  uVar3 = FUN_0010493a(local_20);
  uVar1 = FUN_00104b7f(uVar3,uVar2,uVar1);
  FUN_00104bb4(&local_30,uVar1);
  return;
}




void FUN_0010480f(undefined8 param_1,undefined8 param_2)

{
  FUN_00104b18(param_1,param_2);
  return;
}




void FUN_00105724(void)

{
  return;
}




void FUN_00104aa3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104caa(param_1,param_2,param_3);
  return;
}




void FUN_00104210(void)

{
  return;
}




undefined8 FUN_0010493a(undefined8 param_1)

{
  return param_1;
}




long FUN_0010403a(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001041da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010473a(param_1,param_2,param_3);
  return;
}




void FUN_001042b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_001047c0(param_3);
  uVar2 = FUN_001047aa(param_1);
  FUN_001047d2(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00104839(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104b2c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001034fc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00105695(void)

{
  return;
}




ulong * FUN_001049e6(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102742(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  vfprintf(stdout,param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001043fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001048ba(param_2);
  uVar2 = FUN_001048ba(param_1);
  FUN_001048cc(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00104e54(undefined8 param_1)

{
  return param_1;
}




void FUN_00104c64(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00104e3c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




ulong FUN_00105459(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001048ba(undefined8 param_1)

{
  return param_1;
}




void FUN_00104770(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00103f88(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103998(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104182(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010427c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010573a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010379c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001040b2(param_2);
  FUN_00104061(&local_31,uVar1);
  uVar1 = FUN_0010403a(param_2);
                    /* try { // try from 00103802 to 00103806 has its CatchHandler @ 0010386f */
  FUN_001040c4(param_1,uVar1,&local_31);
  FUN_0010359e(&local_31);
  uVar2 = FUN_00103958(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00104182(param_2);
  uVar4 = FUN_0010412a(param_2);
                    /* try { // try from 00103850 to 00103854 has its CatchHandler @ 0010388d */
  uVar1 = FUN_001041da(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010563c(void)

{
  return 1;
}




void FUN_00103512(undefined8 param_1)

{
  FUN_0010359e(param_1);
  return;
}




undefined8 FUN_00103958(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00104f24(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_0010444e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010493a(param_2);
  uVar2 = FUN_0010493a(param_1);
  FUN_0010494c(uVar2,uVar1,param_3);
  return;
}




void FUN_0010390e(void)

{
  return;
}




undefined8 FUN_001045c4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00104a15(param_1,param_2);
  }
  return uVar1;
}




void FUN_001059a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




ulong FUN_001044d4(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001049c0(param_1);
  lVar2 = FUN_0010403a(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010403a(local_40);
  local_30 = FUN_0010403a(local_40);
  plVar3 = (long *)FUN_001049e6(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010403a(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001049c0(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001049c0(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001051c1(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102996(void)

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
  FUN_00103552(local_d8);
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
                    /* try { // try from 00102b20 to 00102d55 has its CatchHandler @ 00102dad */
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
  local_f0 = FUN_00103658(local_d8);
  FUN_001036a8(local_b8,&local_f0);
  FUN_001036d6(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_00103658(local_d8);
  FUN_001036a8(local_b8,&local_f0);
  FUN_001036d6(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_00103658(local_d8);
  FUN_001036a8(local_b8,&local_f0);
  FUN_001036d6(local_d8,local_b8[0],1,&local_f8);
  FUN_0010379c(local_b8,local_d8);
                    /* try { // try from 00102d60 to 00102d64 has its CatchHandler @ 00102d95 */
  FUN_001026ff(local_b8);
  FUN_00103610(local_b8);
  FUN_00103610(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010568a(void)

{
  return;
}




void * FUN_00105059(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010498a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104bca(param_1,param_2,param_3);
  return;
}




void FUN_001026ff(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102972(param_1,2);
  FUN_00102629(*puVar1,*puVar1);
  return;
}




long FUN_00104362(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001039ba(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001039ba(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00104061(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104653(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010449f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010498a(param_1,param_2,param_3);
  return;
}




void FUN_00104feb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010493a(param_3);
  uVar2 = FUN_0010493a(local_28);
  uVar3 = FUN_0010493a(local_20);
  uVar1 = FUN_001050d1(uVar3,uVar2,uVar1);
  FUN_00104bb4(&local_30,uVar1);
  return;
}




bool FUN_0010583e(pthread_t *param_1)

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




void FUN_00102020(void)

{
  (*(code *)PTR_00108e90)();
  return;
}




void FUN_001053c6(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00104caa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104e54(param_2);
  uVar2 = FUN_00104e54(param_1);
  FUN_00104e66(uVar2,uVar1,param_3);
  return;
}




void FUN_00104b18(void)

{
  return;
}




void FUN_0010572f(void)

{
  return;
}




undefined8 FUN_0010564b(void)

{
  return 0;
}




undefined8 FUN_001050bc(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001052c0(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104a15(undefined8 param_1,undefined8 param_2)

{
  FUN_00104c64(param_1,param_2,0);
  return;
}




void FUN_0010391e(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010421f(param_1,param_2,param_3);
  }
  return;
}




void FUN_0010518f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00104a90(void)

{
  return;
}




int FUN_0010565a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00105703(void)

{
  return;
}




void FUN_0010396a(undefined8 param_1,undefined8 param_2)

{
  FUN_00104251(param_1,param_2);
  return;
}




void FUN_00104885(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104b4a(param_1,param_2,param_3);
  return;
}




void FUN_0010473a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104aa3(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010429e(undefined8 param_1)

{
  return param_1;
}




void FUN_001038dc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00104bca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104da1(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104bfb(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00104def(param_1);
  puVar1 = (undefined8 *)FUN_00104e0d(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00105398(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102ddd(void)

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
  FUN_00103552(local_c8);
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
  local_d0 = FUN_00103658(local_c8);
  FUN_001036a8(local_a8,&local_d0);
                    /* try { // try from 00102eee to 00102fb3 has its CatchHandler @ 0010300b */
  FUN_001036d6(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00103658(local_c8);
  FUN_001036a8(local_a8,&local_d0);
  FUN_001036d6(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00103658(local_c8);
  FUN_001036a8(local_a8,&local_d0);
  FUN_001036d6(local_c8,local_a8[0],1,&local_d8);
  FUN_0010379c(local_a8,local_c8);
                    /* try { // try from 00102fbe to 00102fc2 has its CatchHandler @ 00102ff3 */
  FUN_00102818(local_a8);
  FUN_00103610(local_a8);
  FUN_00103610(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105a10(void)

{
  return;
}




void FUN_0010359e(undefined8 param_1)

{
  FUN_0010390e(param_1);
  return;
}




void FUN_00104ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104fc5(param_2);
  uVar2 = FUN_00104fc5(param_1);
  FUN_00104feb(uVar2,uVar1,param_3);
  return;
}




void FUN_00105674(void)

{
  return;
}




void FUN_00105954(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00104e3c(void)

{
  return 0xfffffffffffffff;
}




void FUN_00104344(undefined8 param_1)

{
  FUN_001047aa(param_1);
  return;
}




void FUN_00105935(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00104bb4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




ulong * FUN_00104e0d(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00103fd4(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00103998(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001056b6(void)

{
  return;
}




void FUN_001049c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001040b2(param_1);
  FUN_00104bfb(uVar1);
  return;
}




void FUN_00104251(undefined8 param_1,undefined8 param_2)

{
  FUN_00104797(param_1,param_2);
  return;
}




void FUN_00104f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00105059(param_1,param_2,param_3);
  return;
}




void FUN_001056c1(void)

{
  return;
}




undefined8 FUN_00104a43(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104b2c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103572(undefined8 param_1)

{
  FUN_001038bc(param_1);
  FUN_001038dc(param_1);
  return;
}




void FUN_0010427c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001047d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001047c0(param_3);
  FUN_00104ad4(param_1,param_2,uVar1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102570();
    DAT_00109028 = 1;
    return;
  }
  return;
}




undefined8 FUN_00105771(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010573a,local_18);
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




void FUN_0010523f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void * FUN_00105106(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00105169(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010303b(void)

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
  FUN_00103552(local_d8);
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
                    /* try { // try from 001031c5 to 001033fa has its CatchHandler @ 00103452 */
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
  local_f0 = FUN_00103658(local_d8);
  FUN_001036a8(local_b8,&local_f0);
  FUN_001036d6(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_00103658(local_d8);
  FUN_001036a8(local_b8,&local_f0);
  FUN_001036d6(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_00103658(local_d8);
  FUN_001036a8(local_b8,&local_f0);
  FUN_001036d6(local_d8,local_b8[0],1,&local_f8);
  FUN_0010379c(local_b8,local_d8);
                    /* try { // try from 00103405 to 00103409 has its CatchHandler @ 0010343a */
  FUN_0010292e(local_b8);
  FUN_00103610(local_b8);
  FUN_00103610(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00102972(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_0010536d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001056d7(void)

{
  return;
}




undefined8 FUN_001040b2(undefined8 param_1)

{
  return param_1;
}




void FUN_00104310(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001047aa(param_1);
  FUN_0010480f(*param_1,uVar1);
  return;
}




void FUN_00104797(void)

{
  return;
}




void FUN_001052eb(undefined4 param_1)

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




long FUN_00103a23(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010429e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010429e(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00105973(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001036a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001039ba(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00104fc5(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001050bc(&local_10);
  FUN_001048ba(uVar1);
  return;
}




void FUN_001038bc(undefined8 param_1)

{
  FUN_00104210(param_1);
  return;
}




void FUN_001056ed(void)

{
  return;
}




void FUN_00104b4a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104cfa(param_1,param_2,param_3);
  return;
}




void FUN_00103532(undefined8 param_1)

{
  FUN_00103572(param_1);
  return;
}




void FUN_001051e9(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00105215(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103998(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010292e(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102972(param_1,2);
  FUN_0010285b(*puVar1,*puVar1);
  return;
}




void FUN_00105295(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103610(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103958(param_1);
  FUN_0010396a(*param_1,param_1[1],uVar1);
  FUN_001035be(param_1);
  return;
}




undefined8 FUN_001039cc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010427c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00104d2b(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_0010421f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104770(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001058bc(undefined8 *param_1)

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




void FUN_00104b7f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104d2b(param_1,param_2,param_3);
  return;
}




void FUN_00103482(void)

{
  FUN_00102ddd();
  FUN_0010303b();
  return;
}




void FUN_00104def(undefined8 param_1)

{
  FUN_00104e3c(param_1);
  return;
}




void FUN_001045fb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104a43(param_2);
  uVar2 = FUN_00104a43(param_1);
  FUN_00104885(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001035be(long *param_1)

{
  FUN_0010391e(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00103512(param_1);
  return;
}




undefined8 FUN_001047c0(undefined8 param_1)

{
  return param_1;
}




void FUN_001036d6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_001039cc(param_1);
  local_18 = FUN_00103a23(&local_38,&local_20);
  local_20 = FUN_00103f88(local_30);
  uVar1 = FUN_00103fd4(&local_20,local_18);
  FUN_00103a68(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103f88(local_30);
  FUN_00103fd4(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103a68(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_001044d4(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103f88(local_80);
      local_60 = FUN_00104362(&local_88,&local_78);
      local_70 = FUN_001045c4(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00103958(local_80);
                    /* try { // try from 00103d72 to 00103dfd has its CatchHandler @ 00103eb5 */
      FUN_0010449f(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00103958(local_80);
      puVar2 = (undefined8 *)FUN_001039ba(&local_88);
      local_70 = FUN_001045fb(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00103958(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001039ba(&local_88);
      local_70 = FUN_001045fb(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00103958(local_80);
      FUN_0010396a(*local_80,local_80[1],uVar1);
      FUN_0010391e(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001042b0(local_38,param_1,param_4);
                    /* try { // try from 00103af2 to 00103cc5 has its CatchHandler @ 00103e97 */
      local_50 = FUN_00104344(local_38);
      local_78 = FUN_00103658(local_80);
      local_48 = FUN_00104362(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00103958(local_80);
        FUN_001043a6(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_001039ba(&local_88);
        FUN_001043fe(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001039ba(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001039ba(&local_88);
        FUN_0010444e(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00103958(local_80);
        lVar4 = FUN_0010449f(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00103958(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001039ba(&local_88);
        FUN_001043a6(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_001039ba(&local_88);
        FUN_0010444e(*puVar2,local_40,local_50);
      }
      FUN_00104310(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104e66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010493a(param_3);
  uVar2 = FUN_00104f6f(local_28);
  uVar3 = FUN_00104f6f(local_20);
  uVar1 = FUN_00104f90(uVar3,uVar2,uVar1);
  FUN_00104bb4(&local_30,uVar1);
  return;
}




void FUN_00104b2c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001056f8(void)

{
  return;
}




void FUN_001046e0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_001045c4(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_00103497(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00105169("Calling good()...");
  FUN_00103482();
  FUN_00105169("Finished good()");
  FUN_00105169("Calling bad()...");
  FUN_00102996();
  FUN_00105169("Finished bad()");
  return 0;
}




void FUN_001056ab(void)

{
  return;
}




void FUN_00102629(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  vfprintf(stdout,param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104cfa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104ed4(param_1,param_2,param_3);
  return;
}




void FUN_001040c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001046aa(param_1,param_3);
                    /* try { // try from 001040fe to 00104102 has its CatchHandler @ 00104105 */
  FUN_001046e0(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




void FUN_0010567f(void)

{
  return;
}




undefined8 FUN_00105899(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00104ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001047c0(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001034fc(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010526a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001056a0(void)

{
  return;
}




void FUN_001053f9(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001056cc(void)

{
  return;
}




long FUN_001047aa(long param_1)

{
  return param_1 + 8;
}




void FUN_0010494c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_0010570e(void)

{
  return;
}




void FUN_00103552(undefined8 param_1)

{
  FUN_00103532(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}




void FUN_0010285b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  vfprintf(stdout,"%s",&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104f6f(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010429e(&local_10);
  return *puVar1;
}




void FUN_00104da1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010493a(param_1);
  uVar1 = FUN_00104f24(uVar1,param_2,param_3);
  FUN_00104bb4(&local_10,uVar1);
  return;
}




void FUN_001056e2(void)

{
  return;
}




void FUN_00104680(undefined8 param_1,undefined8 param_2)

{
  FUN_00104a90(param_1,param_2);
  return;
}




undefined8 FUN_00103658(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103998(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102818(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102972(param_1,2);
  FUN_00102742(*puVar1,*puVar1);
  return;
}




void FUN_001050d1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00105106(param_1,param_2,param_3);
  return;
}




void FUN_00105345(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_0010555d(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00104653(undefined8 param_1,undefined8 param_2)

{
  FUN_00104680(param_1,param_2);
  return param_1;
}




void FUN_00105719(void)

{
  return;
}



