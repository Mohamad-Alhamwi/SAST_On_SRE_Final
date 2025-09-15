
void FUN_001046b0(void)

{
  return;
}




undefined8 FUN_0010256f(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001026f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102fea(param_2);
  uVar1 = FUN_00103008(uVar1);
  FUN_0010301a(param_1,uVar1);
  return;
}




void FUN_0010205a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00102460(param_1,param_2);
  lVar1 = FUN_001024d0(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001024e6(param_1);
                    /* try { // try from 001020b5 to 001020b9 has its CatchHandler @ 001020bf */
    uVar3 = FUN_001024fc(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_0010223a(undefined8 *param_1)

{
  FUN_00102688(*param_1);
  return;
}




void FUN_00102d7c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102cd0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010420d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104922(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010464d(void)

{
  return;
}




undefined8 FUN_00103008(undefined8 param_1)

{
  return param_1;
}




void FUN_00102296(undefined8 param_1,undefined8 param_2)

{
  FUN_001026f4(param_1,param_2);
  return;
}




undefined8 FUN_00102d9a(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102ec0(param_1);
  uVar2 = FUN_00103536(param_2);
  uVar1 = FUN_0010354c(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001033c6(param_1);
  uVar2 = FUN_001036bb(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001031b4(param_1);
  uVar2 = FUN_001036d9(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_001021a6(undefined8 param_1,undefined8 param_2)

{
  FUN_001025da(param_1,param_2);
  return;
}




undefined8 FUN_00102283(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001024d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102cee(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034f4(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001017f1(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
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
  FUN_00101e2a(local_e8);
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
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_b8[0] = 0;
                    /* try { // try from 001018d1 to 00101952 has its CatchHandler @ 001019aa */
  plVar1 = (long *)FUN_00101f2e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00101f2e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00101f2e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_00101e6a(local_b8,local_e8);
                    /* try { // try from 0010195d to 00101961 has its CatchHandler @ 00101992 */
  FUN_00103f8d(local_b8);
  FUN_00101e4a(local_b8);
  FUN_00101e4a(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d0f(undefined8 param_1)

{
  FUN_00102fea(param_1);
  return;
}




void FUN_001046d1(void)

{
  return;
}




undefined8 FUN_00102ed6(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_00102b93(local_38);
    cVar1 = FUN_0010225c(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010256f(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102585(local_38);
    }
  }
  FUN_00102cd0(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




bool FUN_0010480c(pthread_t *param_1)

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




void FUN_001046e7(void)

{
  return;
}




undefined8 FUN_00102585(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001034f4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d3e(param_1,param_2);
  return param_1;
}




undefined8 FUN_00103228(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_00102190(param_1);
  local_50 = FUN_00102ec0(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102b93(local_58);
    local_59 = FUN_0010225c(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010256f(local_58);
    }
    else {
      local_58 = FUN_00102585(local_58);
    }
  }
  FUN_00102cd0(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010383e(param_1);
    cVar1 = FUN_001021ee(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_0010388e(local_38,&local_58,&local_50);
      goto LAB_001033aa;
    }
    FUN_00103424(&local_48);
  }
  uVar2 = FUN_001031ca(local_48);
  cVar1 = FUN_0010225c(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010347c(local_38,&local_48,&local_40);
  }
  else {
    FUN_0010388e(local_38,&local_58,&local_50);
  }
LAB_001033aa:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103b3a(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00102d68(void)

{
  return;
}




undefined8 FUN_00102758(undefined8 param_1)

{
  return param_1;
}




void FUN_00102126(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010256f(local_28);
    FUN_00102126(param_1,uVar1);
    lVar2 = FUN_00102585(local_28);
    FUN_0010259c(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined4 FUN_0010225c(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00104263(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101e0a(undefined8 param_1)

{
  FUN_00101e94(param_1);
  return;
}




undefined8 FUN_00103ba3(undefined8 param_1)

{
  return param_1;
}




void FUN_001019da(void)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [11];
  char acStack_89 [105];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e2a(local_e8);
  acStack_89[1] = '\0';
  acStack_89[2] = '\0';
  acStack_89[3] = '\0';
  acStack_89[4] = '\0';
  acStack_89[5] = '\0';
  acStack_89[6] = '\0';
  acStack_89[7] = '\0';
  acStack_89[8] = '\0';
  acStack_89[9] = '\0';
  acStack_89[10] = '\0';
  acStack_89[0xb] = '\0';
  acStack_89[0xc] = '\0';
  acStack_89[0xd] = '\0';
  acStack_89[0xe] = '\0';
  acStack_89[0xf] = '\0';
  acStack_89[0x10] = '\0';
  acStack_89[0x11] = '\0';
  acStack_89[0x12] = '\0';
  acStack_89[0x13] = '\0';
  acStack_89[0x14] = '\0';
  acStack_89[0x15] = '\0';
  acStack_89[0x16] = '\0';
  acStack_89[0x17] = '\0';
  acStack_89[0x18] = '\0';
  acStack_89[0x19] = '\0';
  acStack_89[0x1a] = '\0';
  acStack_89[0x1b] = '\0';
  acStack_89[0x1c] = '\0';
  acStack_89[0x1d] = '\0';
  acStack_89[0x1e] = '\0';
  acStack_89[0x1f] = '\0';
  acStack_89[0x20] = '\0';
  acStack_89[0x21] = '\0';
  acStack_89[0x22] = '\0';
  acStack_89[0x23] = '\0';
  acStack_89[0x24] = '\0';
  acStack_89[0x25] = '\0';
  acStack_89[0x26] = '\0';
  acStack_89[0x27] = '\0';
  acStack_89[0x28] = '\0';
  acStack_89[0x29] = '\0';
  acStack_89[0x2a] = '\0';
  acStack_89[0x2b] = '\0';
  acStack_89[0x2c] = '\0';
  acStack_89[0x2d] = '\0';
  acStack_89[0x2e] = '\0';
  acStack_89[0x2f] = '\0';
  acStack_89[0x30] = '\0';
  acStack_89[0x31] = '\0';
  acStack_89[0x32] = '\0';
  acStack_89[0x33] = '\0';
  acStack_89[0x34] = '\0';
  acStack_89[0x35] = '\0';
  acStack_89[0x36] = '\0';
  acStack_89[0x37] = '\0';
  acStack_89[0x38] = '\0';
  acStack_89[0x39] = '\0';
  acStack_89[0x3a] = '\0';
  acStack_89[0x3b] = '\0';
  acStack_89[0x3c] = '\0';
  acStack_89[0x3d] = '\0';
  acStack_89[0x3e] = '\0';
  acStack_89[0x3f] = '\0';
  acStack_89[0x40] = '\0';
  acStack_89[0x41] = '\0';
  acStack_89[0x42] = '\0';
  acStack_89[0x43] = '\0';
  acStack_89[0x44] = '\0';
  acStack_89[0x45] = '\0';
  acStack_89[0x46] = '\0';
  acStack_89[0x47] = '\0';
  acStack_89[0x48] = '\0';
  acStack_89[0x49] = '\0';
  acStack_89[0x4a] = '\0';
  acStack_89[0x4b] = '\0';
  acStack_89[0x4c] = '\0';
  acStack_89[0x4d] = '\0';
  acStack_89[0x4e] = '\0';
  acStack_89[0x4f] = '\0';
  acStack_89[0x50] = '\0';
  acStack_89[0x51] = '\0';
  acStack_89[0x52] = '\0';
  acStack_89[0x53] = '\0';
  acStack_89[0x54] = '\0';
  acStack_89[0x55] = '\0';
  acStack_89[0x56] = '\0';
  acStack_89[0x57] = '\0';
  acStack_89[0x58] = '\0';
  acStack_89[0x59] = '\0';
  acStack_89[0x5a] = '\0';
  acStack_89[0x5b] = '\0';
  acStack_89[0x5c] = '\0';
  acStack_89[0x5d] = '\0';
  acStack_89[0x5e] = '\0';
  acStack_89[0x5f] = '\0';
  acStack_89[0x60] = '\0';
  acStack_89[0x61] = '\0';
  acStack_89[0x62] = '\0';
  acStack_89[99] = '\0';
  acStack_89[100] = '\0';
  __s = acStack_89 + 1;
  sVar1 = strlen(__s);
  if (1 < 100 - sVar1) {
                    /* try { // try from 00101ad6 to 00101bfa has its CatchHandler @ 00101c52 */
    pcVar2 = fgets(__s + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00104137("fgets() failed");
      __s[sVar1] = '\0';
    }
    else {
      sVar1 = strlen(__s);
      if ((sVar1 != 0) && (__s[sVar1 - 1] == '\n')) {
        __s[sVar1 - 1] = '\0';
      }
    }
  }
  local_b8[0] = 0;
  puVar3 = (undefined8 *)FUN_00101f2e(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 1;
  puVar3 = (undefined8 *)FUN_00101f2e(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 2;
  puVar3 = (undefined8 *)FUN_00101f2e(local_e8,local_b8);
  *puVar3 = __s;
  FUN_00101e6a(local_b8,local_e8);
                    /* try { // try from 00101c05 to 00101c09 has its CatchHandler @ 00101c3a */
  FUN_001040c8(local_b8);
  FUN_00101e4a(local_b8);
  FUN_00101e4a(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ed0(undefined8 param_1)

{
  FUN_00102116(param_1);
  return;
}




long FUN_0010354c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001038f4(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103958(param_2);
                    /* try { // try from 001035bb to 0010364d has its CatchHandler @ 00103679 */
    uVar2 = FUN_0010354c(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010396e(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001038f4(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103958(local_38);
      uVar2 = FUN_0010354c(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010396e(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00104663(void)

{
  return;
}




void FUN_001046fd(void)

{
  return;
}




void FUN_0010259c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e42(param_1,param_2);
  FUN_00102e86(param_1,param_2);
  return;
}




void FUN_00101e6a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010205a(param_1,param_2);
  return;
}




void FUN_0010267a(void)

{
  return;
}




int FUN_00104628(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




ulong FUN_00104427(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001046dc(void)

{
  return;
}




undefined8 FUN_0010262a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102cd0(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010468f(void)

{
  return;
}




undefined8 FUN_0010460a(void)

{
  return 1;
}




undefined8 FUN_0010383e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102cd0(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103ba3(param_3);
  FUN_00103d2e(param_1,param_2,uVar1);
  return;
}




void FUN_00103734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103998(param_1,param_2,param_3);
  return;
}




void FUN_00102e86(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036f8(param_1);
  FUN_00103734(uVar1,param_2,1);
  return;
}




undefined8 FUN_0010488a(undefined8 *param_1)

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




void FUN_001025da(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ec0(param_1);
  uVar2 = FUN_00102190(param_1);
  FUN_00102ed6(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00102560(void)

{
  return;
}




void FUN_001021d0(undefined8 param_1)

{
  FUN_0010262a(param_1);
  return;
}




void FUN_0010466e(void)

{
  return;
}




void FUN_0010370a(undefined8 param_1,undefined8 param_2)

{
  FUN_00103984(param_1,param_2);
  return;
}




void FUN_001042b9(undefined4 param_1)

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




undefined8 FUN_00103aee(undefined8 param_1)

{
  return param_1;
}




long FUN_001033c6(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103044(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036f8(param_1);
  FUN_0010378d(uVar1,1);
  return;
}




void FUN_00104238(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103bb6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103044(param_1);
  uVar2 = FUN_00103ba3(param_2);
  FUN_00103c46(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00103766(undefined8 param_1)

{
  return param_1;
}




void FUN_00103984(void)

{
  return;
}




void FUN_00102f94(undefined8 param_1)

{
  FUN_00103766(param_1);
  return;
}




void FUN_00101e94(long param_1)

{
  FUN_001020e6(param_1);
  FUN_00102106(param_1);
  FUN_00101d80(param_1 + 8);
  return;
}




undefined8 FUN_0010382b(undefined8 param_1)

{
  return param_1;
}




void FUN_00102fea(undefined8 param_1)

{
  FUN_00103778(param_1);
  return;
}




void FUN_00103c02(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103cb4(param_2);
  puVar2 = (undefined4 *)FUN_00103008(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_0010418f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101ef0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102190(param_1);
  FUN_00102126(param_1,uVar1);
  FUN_00101dea(param_1);
  return;
}




void FUN_00102d3e(undefined8 param_1,undefined8 param_2)

{
  FUN_00103522(param_1,param_2);
  return;
}




undefined8 FUN_00102746(undefined8 param_1)

{
  return param_1;
}




void FUN_00102460(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102cee(param_1,param_2);
  FUN_00102d68(param_1,param_2);
  FUN_00101d80(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e4a(undefined8 param_1)

{
  FUN_00101ef0(param_1);
  return;
}




void FUN_001031ca(undefined8 param_1)

{
  FUN_00102b93(param_1);
  return;
}




void FUN_001031e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_0010382b(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103adb(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




ulong FUN_0010452b(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104679(void)

{
  return;
}




void FUN_00104903(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101d12(void)

{
  return;
}




undefined8 FUN_00103536(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103c46(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101cfc(0x30,param_2);
  uVar1 = FUN_00103ba3(param_3);
  uVar2 = FUN_00102688(param_2);
  uVar3 = FUN_001036f8(param_1);
  FUN_00103cd2(uVar3,uVar2,uVar1);
  return;
}




void FUN_00104394(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001034de(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001024fc(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d7c(local_18,param_1);
  FUN_00102d9a(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104366(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




long FUN_001031b4(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001034bc(long param_1)

{
  FUN_001038d6(param_1 + 0x20);
  return;
}




undefined8 FUN_00102190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010469a(void)

{
  return;
}




void FUN_00103e4f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101f2e(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00103d80(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102ec0(long param_1)

{
  return param_1 + 8;
}




void FUN_001022f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001036d9(undefined8 param_1)

{
  FUN_00101d52(param_1);
  return;
}




void FUN_00103ebe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00102fb2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026aa(param_2);
  FUN_0010301a(param_1,uVar1);
  return;
}




undefined8 FUN_00101cfc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001046c6(void)

{
  return;
}




undefined8
FUN_0010231a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102758(param_5);
  uVar2 = FUN_00102746(param_4);
  uVar3 = FUN_00102734(param_3);
  local_40 = FUN_0010276a(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102396 to 001023d9 has its CatchHandler @ 00102417 */
  uVar1 = FUN_00102b93(local_40);
  local_38 = FUN_001027ea(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010259c(param_1,local_40);
    FUN_00102cd0(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102be6(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8
FUN_00102be6(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_00102ec0(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001031ca(param_3);
      uVar5 = FUN_00102b93(param_4);
      cVar1 = FUN_0010225c(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102c6a;
      }
    }
  }
  bVar2 = true;
LAB_00102c6a:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102cd0(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010428e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined4 * FUN_001038f4(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001034bc(param_2);
  puVar2 = (undefined4 *)FUN_00103b00(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_0010378d(undefined8 param_1,undefined8 param_2)

{
  FUN_001039c0(param_1,param_2,0);
  return;
}




void FUN_001037bb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102758(param_5);
  uVar2 = FUN_00102746(param_4);
  uVar3 = FUN_00102734(param_3);
  FUN_00103a10(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




void FUN_00103a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102734(param_3);
  uVar1 = FUN_00102746(param_4);
  FUN_00102296(local_38,uVar1);
  FUN_00102758(param_5);
  uVar1 = FUN_00101cfc(0x10,param_2);
                    /* try { // try from 00103a98 to 00103a9c has its CatchHandler @ 00103a9f */
  FUN_00103b52(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




undefined8 FUN_001021ee(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




long FUN_001024e6(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_0010276a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103044(param_1);
  uVar2 = FUN_00102758(param_4);
  uVar3 = FUN_00102746(param_3);
  uVar4 = FUN_00102734(param_2);
  FUN_00103070(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103998(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102106(void)

{
  return;
}




void FUN_001043c7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_0010473f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104708,local_18);
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




void FUN_00104708(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101daa(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_001036f8(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e2a(undefined8 param_1)

{
  FUN_00101e0a(param_1);
  return;
}




void FUN_00104137(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010314e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102cd0(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001049e0(void)

{
  return;
}




void FUN_00101c82(void)

{
  FUN_001017f1();
  FUN_001019da();
  return;
}




void FUN_0010388e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103adb(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010382b(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001038d6(undefined8 param_1)

{
  FUN_00103aee(param_1);
  return;
}




long FUN_00101f2e(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_001021a6(param_1,param_2);
  local_28 = FUN_001021d0(param_1);
  cVar2 = FUN_001021ee(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102214(param_1);
    uVar3 = FUN_0010223a(&local_38);
    cVar2 = FUN_0010225c(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101fce;
    }
  }
  bVar1 = true;
LAB_00101fce:
  if (bVar1) {
    uVar3 = FUN_00102283(param_2);
    FUN_001022c0(local_30,uVar3);
    FUN_001022f8(&local_28,&local_38);
    local_38 = FUN_0010231a(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_0010223a(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_0010396e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_00101d52(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_001046bb(void)

{
  return;
}




void FUN_001020e6(undefined8 param_1)

{
  FUN_00102560(param_1);
  return;
}




undefined8 * FUN_00103424(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001022c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026aa(param_2);
  FUN_001026bc(param_1,uVar1);
  return param_1;
}




void FUN_0010433b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010319e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101490();
    DAT_00109028 = 1;
    return;
  }
  return;
}




void FUN_0010347c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010382b(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00102688(long param_1)

{
  FUN_00102f94(param_1 + 0x20);
  return;
}




long FUN_00101d25(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00102b93(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001034bc(param_1);
  FUN_001034de(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101dea(undefined8 param_1)

{
  FUN_00101ed0(param_1);
  return;
}




void FUN_00102116(void)

{
  return;
}




void FUN_00103522(void)

{
  return;
}




void FUN_00104941(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001046f2(void)

{
  return;
}




void FUN_00103070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101cfc(0x30,param_2);
  uVar1 = FUN_00102758(param_5);
  uVar2 = FUN_00102746(param_4);
  uVar3 = FUN_00102734(param_3);
  uVar4 = FUN_00102688(param_2);
  uVar5 = FUN_001036f8(param_1);
                    /* try { // try from 001030ff to 00103103 has its CatchHandler @ 00103106 */
  FUN_001037bb(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010415d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102734(undefined8 param_1)

{
  return param_1;
}




void FUN_00101549(void)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [11];
  char acStack_89 [105];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e2a(local_e8);
  acStack_89[1] = '\0';
  acStack_89[2] = '\0';
  acStack_89[3] = '\0';
  acStack_89[4] = '\0';
  acStack_89[5] = '\0';
  acStack_89[6] = '\0';
  acStack_89[7] = '\0';
  acStack_89[8] = '\0';
  acStack_89[9] = '\0';
  acStack_89[10] = '\0';
  acStack_89[0xb] = '\0';
  acStack_89[0xc] = '\0';
  acStack_89[0xd] = '\0';
  acStack_89[0xe] = '\0';
  acStack_89[0xf] = '\0';
  acStack_89[0x10] = '\0';
  acStack_89[0x11] = '\0';
  acStack_89[0x12] = '\0';
  acStack_89[0x13] = '\0';
  acStack_89[0x14] = '\0';
  acStack_89[0x15] = '\0';
  acStack_89[0x16] = '\0';
  acStack_89[0x17] = '\0';
  acStack_89[0x18] = '\0';
  acStack_89[0x19] = '\0';
  acStack_89[0x1a] = '\0';
  acStack_89[0x1b] = '\0';
  acStack_89[0x1c] = '\0';
  acStack_89[0x1d] = '\0';
  acStack_89[0x1e] = '\0';
  acStack_89[0x1f] = '\0';
  acStack_89[0x20] = '\0';
  acStack_89[0x21] = '\0';
  acStack_89[0x22] = '\0';
  acStack_89[0x23] = '\0';
  acStack_89[0x24] = '\0';
  acStack_89[0x25] = '\0';
  acStack_89[0x26] = '\0';
  acStack_89[0x27] = '\0';
  acStack_89[0x28] = '\0';
  acStack_89[0x29] = '\0';
  acStack_89[0x2a] = '\0';
  acStack_89[0x2b] = '\0';
  acStack_89[0x2c] = '\0';
  acStack_89[0x2d] = '\0';
  acStack_89[0x2e] = '\0';
  acStack_89[0x2f] = '\0';
  acStack_89[0x30] = '\0';
  acStack_89[0x31] = '\0';
  acStack_89[0x32] = '\0';
  acStack_89[0x33] = '\0';
  acStack_89[0x34] = '\0';
  acStack_89[0x35] = '\0';
  acStack_89[0x36] = '\0';
  acStack_89[0x37] = '\0';
  acStack_89[0x38] = '\0';
  acStack_89[0x39] = '\0';
  acStack_89[0x3a] = '\0';
  acStack_89[0x3b] = '\0';
  acStack_89[0x3c] = '\0';
  acStack_89[0x3d] = '\0';
  acStack_89[0x3e] = '\0';
  acStack_89[0x3f] = '\0';
  acStack_89[0x40] = '\0';
  acStack_89[0x41] = '\0';
  acStack_89[0x42] = '\0';
  acStack_89[0x43] = '\0';
  acStack_89[0x44] = '\0';
  acStack_89[0x45] = '\0';
  acStack_89[0x46] = '\0';
  acStack_89[0x47] = '\0';
  acStack_89[0x48] = '\0';
  acStack_89[0x49] = '\0';
  acStack_89[0x4a] = '\0';
  acStack_89[0x4b] = '\0';
  acStack_89[0x4c] = '\0';
  acStack_89[0x4d] = '\0';
  acStack_89[0x4e] = '\0';
  acStack_89[0x4f] = '\0';
  acStack_89[0x50] = '\0';
  acStack_89[0x51] = '\0';
  acStack_89[0x52] = '\0';
  acStack_89[0x53] = '\0';
  acStack_89[0x54] = '\0';
  acStack_89[0x55] = '\0';
  acStack_89[0x56] = '\0';
  acStack_89[0x57] = '\0';
  acStack_89[0x58] = '\0';
  acStack_89[0x59] = '\0';
  acStack_89[0x5a] = '\0';
  acStack_89[0x5b] = '\0';
  acStack_89[0x5c] = '\0';
  acStack_89[0x5d] = '\0';
  acStack_89[0x5e] = '\0';
  acStack_89[0x5f] = '\0';
  acStack_89[0x60] = '\0';
  acStack_89[0x61] = '\0';
  acStack_89[0x62] = '\0';
  acStack_89[99] = '\0';
  acStack_89[100] = '\0';
  __s = acStack_89 + 1;
  sVar1 = strlen(__s);
  if (1 < 100 - sVar1) {
                    /* try { // try from 00101645 to 00101769 has its CatchHandler @ 001017c1 */
    pcVar2 = fgets(__s + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00104137("fgets() failed");
      __s[sVar1] = '\0';
    }
    else {
      sVar1 = strlen(__s);
      if ((sVar1 != 0) && (__s[sVar1 - 1] == '\n')) {
        __s[sVar1 - 1] = '\0';
      }
    }
  }
  local_b8[0] = 0;
  puVar3 = (undefined8 *)FUN_00101f2e(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 1;
  puVar3 = (undefined8 *)FUN_00101f2e(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 2;
  puVar3 = (undefined8 *)FUN_00101f2e(local_e8,local_b8);
  *puVar3 = __s;
  FUN_00101e6a(local_b8,local_e8);
                    /* try { // try from 00101774 to 00101778 has its CatchHandler @ 001017a9 */
  FUN_00103e4f(local_b8);
  FUN_00101e4a(local_b8);
  FUN_00101e4a(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00104658(void)

{
  return;
}




undefined8 FUN_00104867(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001033dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010382b(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010382b(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001046a5(void)

{
  return;
}




undefined8 FUN_00104619(void)

{
  return 0;
}




undefined4 FUN_00102214(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_0010267a(param_1);
  return unaff_EBX;
}




void FUN_00103cb4(undefined8 param_1)

{
  FUN_00103d0f(param_1);
  return;
}




void FUN_00104313(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010301a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026aa(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00103958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103d2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103ba3(param_3);
  puVar3 = (undefined8 *)FUN_00101cfc(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00103b00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103ba3(param_2);
  FUN_00103bb6(uVar1,uVar2);
  return;
}




void FUN_00103f8d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101f2e(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00103ebe(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_001027ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_0010314e(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102ec0(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001031ca(local_50);
    cVar2 = FUN_0010225c(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001031ca(local_50);
      cVar2 = FUN_0010225c(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010347c(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001031b4(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001031b4(local_60);
          local_48[1] = 0;
          FUN_001031e8(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00103450(local_48);
          uVar6 = FUN_001031ca(*puVar5);
          cVar2 = FUN_0010225c(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00103228(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010256f(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001031e8(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001033dc(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001033c6(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001033c6(local_60);
        uVar6 = FUN_001033c6(local_60);
        FUN_001033dc(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103424(local_48);
        uVar6 = FUN_001031ca(*puVar5);
        cVar2 = FUN_0010225c(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00103228(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010256f(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001031e8(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001033dc(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102b78;
  }
  lVar3 = FUN_0010319e(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_0010288c:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001031b4(local_60);
    uVar6 = FUN_001031ca(*puVar5);
    cVar2 = FUN_0010225c(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_0010288c;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001031b4(local_60);
    local_48[1] = 0;
    FUN_001031e8(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00103228(local_60,param_3);
  }
LAB_00102b78:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00102e42(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102688(param_2);
  uVar2 = FUN_001036f8(param_1);
  FUN_0010370a(uVar2,uVar1);
  return;
}




void FUN_001041b7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101c97(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104137("Calling good()...");
  FUN_00101c82();
  FUN_00104137("Finished good()");
  FUN_00104137("Calling bad()...");
  FUN_00101549();
  FUN_00104137("Finished bad()");
  return 0;
}




void FUN_001036bb(undefined8 param_1)

{
  FUN_00101d25(param_1);
  return;
}




undefined8 * FUN_00103450(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001040c8(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101f2e(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00103ffc(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001026bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026aa(param_2);
  FUN_00102fb2(param_1,uVar1);
  return;
}




void FUN_00104642(void)

{
  return;
}




void FUN_00101d80(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101daa(param_1);
  return;
}




void FUN_00104970(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00103778(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001039c0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103b3a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00103b52(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103c02(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001026aa(undefined8 param_1)

{
  return param_1;
}




void FUN_00104684(void)

{
  return;
}




void FUN_001041e3(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}



