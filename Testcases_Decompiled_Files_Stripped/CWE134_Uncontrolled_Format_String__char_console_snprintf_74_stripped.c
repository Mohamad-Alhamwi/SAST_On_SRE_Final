
void FUN_001036de(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103708(param_1);
  return;
}




void FUN_0010384e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010237c(param_1);
  FUN_00103958(param_1,uVar1);
  FUN_00103748(param_1);
  return;
}




undefined8 FUN_00101cfa(undefined8 param_1)

{
  return param_1;
}




void FUN_00102baa(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102d87(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b48(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102de8(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00103b22(undefined8 param_1,undefined8 param_2)

{
  FUN_00103c54(param_1,param_2);
  return;
}




long FUN_00103a48(long param_1)

{
  return param_1 + 0x10;
}




void FUN_0010199a(undefined8 param_1)

{
  FUN_00101c7a(param_1);
  return;
}




void FUN_00103e0b(undefined8 param_1)

{
  FUN_001036b1(param_1);
  return;
}




void FUN_00102e95(undefined8 param_1)

{
  FUN_00102eb3(param_1);
  return;
}




void FUN_00103b4c(void)

{
  return;
}




undefined8 FUN_00102d87(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e52(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102e95(param_2);
  puVar2 = (undefined4 *)FUN_001024da(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_0010360a(void)

{
  FUN_00103179();
  FUN_00103362();
  return;
}




void FUN_00103a5e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103b60(local_18,param_1);
  FUN_00103b7e(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001026fa(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_0010237c(param_1);
  local_50 = FUN_00102392(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001021e3(local_58);
    local_59 = FUN_00101a26(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102922(local_58);
    }
    else {
      local_58 = FUN_00102a5a(local_58);
    }
  }
  FUN_0010235e(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102b5a(param_1);
    cVar1 = FUN_001019b8(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102baa(local_38,&local_58,&local_50);
      goto LAB_0010287c;
    }
    FUN_001028f6(&local_48);
  }
  uVar2 = FUN_0010269c(local_48);
  cVar1 = FUN_00101a26(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102964(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102baa(local_38,&local_58,&local_50);
  }
LAB_0010287c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001047a3(undefined8 *param_1)

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




void FUN_00103c54(void)

{
  return;
}




void FUN_001024bc(undefined8 param_1)

{
  FUN_00102a82(param_1);
  return;
}




void FUN_00103708(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010417c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103ffe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103ef4(param_3);
  puVar3 = (undefined8 *)FUN_0010181a(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_001045f5(void)

{
  return;
}




undefined8 FUN_00103ad1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103c26(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103938(void)

{
  return;
}




void FUN_00102c6c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102de8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00102e00(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102e52(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102a5a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010460b(void)

{
  return;
}




void FUN_00101723(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  undefined8 local_80;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00101844(param_1,&local_84);
  local_80 = *puVar1;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,"%s",local_80);
  FUN_00104050(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102898(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00101a8a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cfa(param_2);
  FUN_00101d0c(param_1,uVar1);
  return param_1;
}




void FUN_00102ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101da8(param_5);
  uVar2 = FUN_00101d96(param_4);
  uVar3 = FUN_00101d84(param_3);
  FUN_00102cbc(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00101d44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024bc(param_2);
  uVar1 = FUN_001024da(uVar1);
  FUN_001024ec(param_1,uVar1);
  return;
}




void FUN_0010422c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103748(undefined8 param_1)

{
  FUN_0010382e(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




undefined8 FUN_00102a98(undefined8 param_1)

{
  return param_1;
}




void FUN_001037a8(undefined8 param_1)

{
  FUN_0010384e(param_1);
  return;
}




undefined8 FUN_00101d84(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a04(undefined8 *param_1)

{
  FUN_00101cd8(*param_1);
  return;
}




void FUN_00103788(undefined8 param_1)

{
  FUN_00103768(param_1);
  return;
}




void FUN_00104566(void)

{
  return;
}




undefined8 FUN_00102620(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010235e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104780(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00104340(long param_1,ulong param_2,long param_3)

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




void FUN_00101970(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c2a(param_1,param_2);
  return;
}




undefined8 FUN_00103b7e(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102392(param_1);
  uVar2 = FUN_00103c68(param_2);
  uVar1 = FUN_00103c7e(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102898(param_1);
  uVar2 = FUN_00103ded(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102686(param_1);
  uVar2 = FUN_00103e0b(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00102484(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cfa(param_2);
  FUN_001024ec(param_1,uVar1);
  return;
}




long FUN_001036b1(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00102d9a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103768(undefined8 param_1)

{
  FUN_001037f2(param_1);
  return;
}




void FUN_001042e0(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102320(undefined8 param_1,undefined8 param_2)

{
  FUN_001029dc(param_1,param_2);
  FUN_00102a20(param_1,param_2);
  return;
}




void FUN_00101cca(void)

{
  return;
}




void FUN_001045df(void)

{
  return;
}




void FUN_00104050(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00103e8e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00104616(void)

{
  return;
}




ulong FUN_00104444(long param_1,ulong param_2,long param_3)

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




void FUN_001045a8(void)

{
  return;
}




undefined8 FUN_00103c68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102aaa(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c6c(param_1,param_2,0);
  return;
}




void FUN_0010455b(void)

{
  return;
}




void FUN_00103ded(undefined8 param_1)

{
  FUN_00103684(param_1);
  return;
}




void FUN_00104621(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001021e3(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001029a4(param_1);
  FUN_001029c6(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102b48(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ac2(void)

{
  return;
}




void FUN_00103918(undefined8 param_1)

{
  FUN_00103ac2(param_1);
  return;
}




void FUN_00103362(void)

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
  FUN_00103788(local_e8);
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
                    /* try { // try from 0010345e to 00103582 has its CatchHandler @ 001035da */
    pcVar2 = fgets(__s + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00104050("fgets() failed");
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
  puVar3 = (undefined8 *)FUN_00101844(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 1;
  puVar3 = (undefined8 *)FUN_00101844(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 2;
  puVar3 = (undefined8 *)FUN_00101844(local_e8,local_b8);
  *puVar3 = __s;
  FUN_001037c8(local_b8,local_e8);
                    /* try { // try from 0010358d to 00103591 has its CatchHandler @ 001035c2 */
  FUN_00101723(local_b8);
  FUN_001037a8(local_b8);
  FUN_001037a8(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102a82(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103f52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010181a(0x30,param_2);
  uVar1 = FUN_00103ef4(param_3);
  uVar2 = FUN_00101cd8(param_2);
  uVar3 = FUN_00102a98(param_1);
  FUN_00103fc0(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103ef4(param_3);
  FUN_00103ffe(param_1,param_2,uVar1);
  return;
}




void FUN_001045d4(void)

{
  return;
}




undefined8 FUN_00102670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00101ac2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 * FUN_00102938(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001041d2(undefined4 param_1)

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




undefined8 FUN_00104658(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104621,local_18);
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




void FUN_00104151(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101d96(undefined8 param_1)

{
  return param_1;
}




long FUN_00103684(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00103f06(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102516(param_1);
  uVar2 = FUN_00103ef4(param_2);
  FUN_00103f52(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00101a60(undefined8 param_1,undefined8 param_2)

{
  FUN_00101d44(param_1,param_2);
  return;
}




void FUN_00104126(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d84(param_3);
  uVar1 = FUN_00101d96(param_4);
  FUN_00101a60(local_38,uVar1);
  FUN_00101da8(param_5);
  uVar1 = FUN_0010181a(0x10,param_2);
                    /* try { // try from 00102d44 to 00102d48 has its CatchHandler @ 00102d4b */
  FUN_00102e00(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010485a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00103c26(undefined8 param_1,undefined8 param_2)

{
  FUN_00103b22(param_1,param_2);
  return param_1;
}




void FUN_00101549(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00101844(param_1,&local_84);
  local_80 = (char *)*puVar1;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,local_80);
  FUN_00104050(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ed1(void)

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
  FUN_00103788(local_e8);
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
                    /* try { // try from 00102fcd to 001030f1 has its CatchHandler @ 00103149 */
    pcVar2 = fgets(__s + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00104050("fgets() failed");
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
  puVar3 = (undefined8 *)FUN_00101844(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 1;
  puVar3 = (undefined8 *)FUN_00101844(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 2;
  puVar3 = (undefined8 *)FUN_00101844(local_e8,local_b8);
  *puVar3 = __s;
  FUN_001037c8(local_b8,local_e8);
                    /* try { // try from 001030fc to 00103100 has its CatchHandler @ 00103131 */
  FUN_00101549(local_b8);
  FUN_001037a8(local_b8);
  FUN_001037a8(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010427f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104890(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




long FUN_00103c7e(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103e2a(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103e8e(param_2);
                    /* try { // try from 00103ced to 00103d7f has its CatchHandler @ 00103dab */
    uVar2 = FUN_00103c7e(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103ea4(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103e2a(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103e8e(local_38);
      uVar2 = FUN_00103c7e(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103ea4(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8
FUN_00101ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101da8(param_5);
  uVar2 = FUN_00101d96(param_4);
  uVar3 = FUN_00101d84(param_3);
  local_40 = FUN_00101dba(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101b60 to 00101ba3 has its CatchHandler @ 00101be1 */
  uVar1 = FUN_001021e3(local_40);
  local_38 = FUN_00101e3a(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102320(param_1,local_40);
    FUN_0010235e(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102236(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_00102922(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103179(void)

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
  FUN_00103788(local_e8);
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
                    /* try { // try from 00103259 to 001032da has its CatchHandler @ 00103332 */
  plVar1 = (long *)FUN_00101844(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00101844(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00101844(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_001037c8(local_b8,local_e8);
                    /* try { // try from 001032e5 to 001032e9 has its CatchHandler @ 0010331a */
  FUN_00101636(local_b8);
  FUN_001037a8(local_b8);
  FUN_001037a8(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103a32(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101e3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102620(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102392(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010269c(local_50);
    cVar2 = FUN_00101a26(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010269c(local_50);
      cVar2 = FUN_00101a26(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102964(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102686(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102686(local_60);
          local_48[1] = 0;
          FUN_001026ba(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102938(local_48);
          uVar6 = FUN_0010269c(*puVar5);
          cVar2 = FUN_00101a26(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001026fa(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102922(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001026ba(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001028ae(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102898(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102898(local_60);
        uVar6 = FUN_00102898(local_60);
        FUN_001028ae(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001028f6(local_48);
        uVar6 = FUN_0010269c(*puVar5);
        cVar2 = FUN_00101a26(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001026fa(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102922(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001026ba(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001028ae(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001021c8;
  }
  lVar3 = FUN_00102670(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101edc:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102686(local_60);
    uVar6 = FUN_0010269c(*puVar5);
    cVar2 = FUN_00101a26(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101edc;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102686(local_60);
    local_48[1] = 0;
    FUN_001026ba(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001026fa(local_60,param_3);
  }
LAB_001021c8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00101830(void)

{
  return;
}




undefined8 FUN_001023a8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001021e3(local_38);
    cVar1 = FUN_00101a26(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102922(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102a5a(local_38);
    }
  }
  FUN_0010235e(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00104587(void)

{
  return;
}




undefined8 FUN_00101da8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104532(void)

{
  return 0;
}




int FUN_00104541(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




long FUN_00102686(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00102542(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010181a(0x30,param_2);
  uVar1 = FUN_00101da8(param_5);
  uVar2 = FUN_00101d96(param_4);
  uVar3 = FUN_00101d84(param_3);
  uVar4 = FUN_00101cd8(param_2);
  uVar5 = FUN_00102a98(param_1);
                    /* try { // try from 001025d1 to 001025d5 has its CatchHandler @ 001025d8 */
  FUN_00102ad8(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001045c9(void)

{
  return;
}




void FUN_00101c2a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102392(param_1);
  uVar2 = FUN_0010237c(param_1);
  FUN_001023a8(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00102dac(void)

{
  return;
}




void FUN_00101cd8(long param_1)

{
  FUN_00102466(param_1 + 0x20);
  return;
}




undefined8 FUN_0010361f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104050("Calling good()...");
  FUN_0010360a();
  FUN_00104050("Finished good()");
  FUN_00104050("Calling bad()...");
  FUN_00102ed1();
  FUN_00104050("Finished bad()");
  return 0;
}




void FUN_00103948(void)

{
  return;
}




void FUN_001045b3(void)

{
  return;
}




undefined8 FUN_00101dba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102516(param_1);
  uVar2 = FUN_00101da8(param_4);
  uVar3 = FUN_00101d96(param_3);
  uVar4 = FUN_00101d84(param_2);
  FUN_00102542(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00102c10(undefined8 param_1,undefined8 param_2)

{
  FUN_00102dac(param_1,param_2);
  return;
}




void FUN_001029dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101cd8(param_2);
  uVar2 = FUN_00102a98(param_1);
  FUN_00102c10(uVar2,uVar1);
  return;
}




void FUN_001042ad(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined4 FUN_00101a26(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00102a70(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_00103eba(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103ef4(param_2);
  FUN_00103f06(uVar1,uVar2);
  return;
}




void FUN_0010235e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001028ae(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b48(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b48(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010181a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104571(void)

{
  return;
}




void FUN_0010457c(void)

{
  return;
}




undefined8 FUN_00102b5a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010235e(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102516(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102a98(param_1);
  FUN_00102aaa(uVar1,1);
  return;
}




void FUN_0010459d(void)

{
  return;
}




void FUN_001029a4(long param_1)

{
  FUN_00102bf2(param_1 + 0x20);
  return;
}




undefined4 FUN_001019de(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101cca(param_1);
  return unaff_EBX;
}




void FUN_00102bf2(undefined8 param_1)

{
  FUN_00102d9a(param_1);
  return;
}




void FUN_001040a8(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101a4d(undefined8 param_1)

{
  return param_1;
}




long FUN_00101844(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101970(param_1,param_2);
  local_28 = FUN_0010199a(param_1);
  cVar2 = FUN_001019b8(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001019de(param_1);
    uVar3 = FUN_00101a04(&local_38);
    cVar2 = FUN_00101a26(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001018e4;
    }
  }
  bVar1 = true;
LAB_001018e4:
  if (bVar1) {
    uVar3 = FUN_00101a4d(param_2);
    FUN_00101a8a(local_30,uVar3);
    FUN_00101ac2(&local_28,&local_38);
    local_38 = FUN_00101ae4(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101a04(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102eb3(undefined8 param_1)

{
  FUN_001024bc(param_1);
  return;
}




undefined8 FUN_00103ef4(undefined8 param_1)

{
  return param_1;
}




void FUN_0010269c(undefined8 param_1)

{
  FUN_001021e3(param_1);
  return;
}




void FUN_001040fc(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001037c8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010388c(param_1,param_2);
  return;
}




void FUN_00102964(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b48(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_001039c2(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103ad1(param_1,param_2);
  FUN_00103b4c(param_1,param_2);
  FUN_001036de(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102a98(param_1);
  FUN_00102c3a(uVar1,param_2,1);
  return;
}




void FUN_00102c3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102dc0(param_1,param_2,param_3);
  return;
}




void FUN_001041a7(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101636(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00101844(param_1,&local_84);
  local_80 = (char *)*puVar1;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,local_80);
  FUN_00104050(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010388c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001039c2(param_1,param_2);
  lVar1 = FUN_00103a32(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103a48(param_1);
                    /* try { // try from 001038e7 to 001038eb has its CatchHandler @ 001038f1 */
    uVar3 = FUN_00103a5e(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_001026ba(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102b48(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010483b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102466(undefined8 param_1)

{
  FUN_00102a70(param_1);
  return;
}




undefined8
FUN_00102236(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102392(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010269c(param_3);
      uVar5 = FUN_001021e3(param_4);
      cVar1 = FUN_00101a26(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001022ba;
      }
    }
  }
  bVar2 = true;
LAB_001022ba:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010235e(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00104076(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102dc0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
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




long FUN_00102392(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_001019b8(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




bool FUN_00104725(pthread_t *param_1)

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




undefined4 * FUN_00103e2a(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001029a4(param_2);
  puVar2 = (undefined4 *)FUN_00103eba(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00104592(void)

{
  return;
}




void FUN_0010481c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001045ea(void)

{
  return;
}




void FUN_00104900(void)

{
  return;
}




void FUN_00103958(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102922(local_28);
    FUN_00103958(param_1,uVar1);
    lVar2 = FUN_00102a5a(local_28);
    FUN_00102320(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103b60(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101d0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cfa(param_2);
  FUN_00102484(param_1,uVar1);
  return;
}




undefined8 * FUN_001028f6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_0010237c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001024ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cfa(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00104254(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001040d0(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010382e(undefined8 param_1)

{
  FUN_00103948(param_1);
  return;
}




undefined8 FUN_001029c6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001024da(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104523(void)

{
  return 1;
}




void FUN_001045be(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




undefined8 FUN_00101c7a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010235e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104600(void)

{
  return;
}




void FUN_001037f2(long param_1)

{
  FUN_00103918(param_1);
  FUN_00103938(param_1);
  FUN_001036de(param_1 + 8);
  return;
}



