
void FUN_0010385b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103a39(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103d40(void)

{
  return;
}




void FUN_00103a11(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010316f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103376(param_1,param_2,param_3);
  return;
}




void FUN_00101c1e(undefined8 param_1)

{
  FUN_00101bfe(param_1);
  return;
}




undefined8 FUN_00103520(undefined8 param_1)

{
  return param_1;
}




void FUN_0010324b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033f7(param_1,param_2,param_3);
  return;
}




void FUN_00103e06(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101c3e(undefined8 param_1)

{
  FUN_00101f88(param_1);
  FUN_00101fa8(param_1);
  return;
}




void FUN_001028a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e06(param_1,param_2,param_3);
  return;
}




void FUN_0010291d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e63(param_1,param_2);
  return;
}




ulong * FUN_001034d9(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_0010277e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a72(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f05(param_2);
  uVar2 = FUN_00102f05(param_1);
  FUN_00102f51(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001034bb(undefined8 param_1)

{
  FUN_00103508(param_1);
  return;
}




void FUN_00103376(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103520(param_2);
  uVar2 = FUN_00103520(param_1);
  FUN_00103532(uVar2,uVar1,param_3);
  return;
}




void FUN_00101bde(undefined8 param_1)

{
  FUN_00101c6a(param_1);
  return;
}




void FUN_001035a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103691(param_2);
  uVar2 = FUN_00103691(param_1);
  FUN_001036b7(uVar2,uVar1,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




ulong FUN_00103b25(long param_1,ulong param_2,long param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101430();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_00103d77(void)

{
  return;
}




void FUN_00103056(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103296(param_1,param_2,param_3);
  return;
}




void FUN_00102b6b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103056(param_1,param_2,param_3);
  return;
}




void FUN_00103a64(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102086(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102f86(undefined8 param_1)

{
  return param_1;
}




void FUN_00102edb(undefined8 param_1,undefined8 param_2)

{
  FUN_001031e4(param_1,param_2);
  return;
}




void FUN_00102a10(undefined8 param_1)

{
  FUN_00102e76(param_1);
  return;
}




void FUN_00103dcf(void)

{
  return;
}




long FUN_001033f7(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_0010403f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102c90(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001030e1(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103da3(void)

{
  return;
}




void FUN_00103d4b(void)

{
  return;
}




void FUN_00103691(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103788(&local_10);
  FUN_00102f86(uVar1);
  return;
}




void FUN_00103961(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010398c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103f65(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103ac5(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001033c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035a0(param_1,param_2,param_3);
  return;
}




void FUN_0010346d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103006(param_1);
  uVar1 = FUN_001035f0(uVar1,param_2,param_3);
  FUN_00103280(&local_10,uVar1);
  return;
}




void FUN_0010297c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102e8c(param_3);
  uVar2 = FUN_00102e76(param_1);
  FUN_00102e9e(*param_1,uVar2,uVar1);
  return;
}




void FUN_00101938(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  undefined auStack_78 [8];
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c1e(local_58);
  for (puVar2 = auStack_78; puVar2 != auStack_78; puVar2 = puVar2 + -0x1000) {
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  }
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  local_60 = (void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar2 + -0x78) = 0x1019fb;
  memset((void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = local_60;
  *(undefined8 *)(puVar2 + -0x78) = 0x101a1a;
  local_68 = FUN_00101d24(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x101a31;
  FUN_00101d74(local_38,&local_68);
  uVar1 = local_38[0];
                    /* try { // try from 00101a48 to 00101add has its CatchHandler @ 00101b29 */
  *(undefined8 *)(puVar2 + -0x78) = 0x101a4d;
  FUN_00101da2(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x101a59;
  local_68 = FUN_00101d24(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x101a70;
  FUN_00101d74(local_38,&local_68);
  uVar1 = local_38[0];
  *(undefined8 *)(puVar2 + -0x78) = 0x101a8c;
  FUN_00101da2(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x101a98;
  local_68 = FUN_00101d24(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x101aaf;
  FUN_00101d74(local_38,&local_68);
  *(undefined8 *)(puVar2 + -0x78) = 0x101acb;
  FUN_00101da2(local_58,local_38[0],1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x101ade;
  FUN_00101e68(local_38,local_58);
                    /* try { // try from 00101ae5 to 00101ae9 has its CatchHandler @ 00101b14 */
  *(undefined8 *)(puVar2 + -0x78) = 0x101aea;
  FUN_001015ef(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x101af6;
  FUN_00101cdc(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x101b02;
  FUN_00101cdc(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar2 + -0x78) = 0x101b4c;
  __stack_chk_fail();
}




void * FUN_001037d2(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101e68(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010277e(param_2);
  FUN_0010272d(&local_31,uVar1);
  uVar1 = FUN_00102706(param_2);
                    /* try { // try from 00101ece to 00101ed2 has its CatchHandler @ 00101f3b */
  FUN_00102790(param_1,uVar1,&local_31);
  FUN_00101c6a(&local_31);
  uVar2 = FUN_00102024(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010284e(param_2);
  uVar4 = FUN_001027f6(param_2);
                    /* try { // try from 00101f1c to 00101f20 has its CatchHandler @ 00101f59 */
  uVar1 = FUN_001028a6(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f51(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103216(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102654(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102064(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010388d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103dfb(void)

{
  return;
}




void FUN_001031f8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103216(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033c6(param_1,param_2,param_3);
  return;
}




void FUN_0010308c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010277e(param_1);
  FUN_001032c7(uVar1);
  return;
}




undefined8 FUN_00103280(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




int FUN_00103d26(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102098(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102948(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103d56(void)

{
  return;
}




void FUN_00102e63(void)

{
  return;
}




void FUN_001036b7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103006(param_3);
  uVar2 = FUN_00103006(local_28);
  uVar3 = FUN_00103006(local_20);
  uVar1 = FUN_0010379d(uVar3,uVar2,uVar1);
  FUN_00103280(&local_30,uVar1);
  return;
}




long FUN_001016f6(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_00102f05(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031f8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001015ef(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_FS_OFFSET;
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
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_001016f6(param_1,2);
  puVar1 = (undefined8 *)*plVar2;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_00103835(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103a92(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001031a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102e8c(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101bc7(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00104070(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00103508(void)

{
  return 0xfffffffffffffff;
}




ulong * FUN_001030b2(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00101f88(undefined8 param_1)

{
  FUN_001028dc(param_1);
  return;
}




undefined8 FUN_0010272d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d1f(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 * FUN_001035f0(undefined8 *param_1,long param_2,undefined8 *param_3)

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




ulong FUN_00103c29(long param_1,ulong param_2,long param_3)

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




void FUN_001038e1(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010379d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001037d2(param_1,param_2,param_3);
  return;
}




void FUN_00104020(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101da2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00102098(param_1);
  local_18 = FUN_001020ef(&local_38,&local_20);
  local_20 = FUN_00102654(local_30);
  uVar1 = FUN_001026a0(&local_20,local_18);
  FUN_00102134(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102654(local_30);
  FUN_001026a0(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102036(undefined8 param_1,undefined8 param_2)

{
  FUN_0010291d(param_1,param_2);
  return;
}




void FUN_00101c6a(undefined8 param_1)

{
  FUN_00101fda(param_1);
  return;
}




void FUN_00103db9(void)

{
  return;
}




long FUN_00102706(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_001032c7(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001034bb(param_1);
  puVar1 = (undefined8 *)FUN_001034d9(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00102b1a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103006(param_2);
  uVar2 = FUN_00103006(param_1);
  FUN_00103018(uVar2,uVar1,param_3);
  return;
}




void FUN_00101d74(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102086(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_0010315c(void)

{
  return;
}




void FUN_001040e0(void)

{
  return;
}




void FUN_00103936(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102024(undefined8 param_1)

{
  return param_1;
}




void FUN_0010171a(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  undefined auStack_78 [8];
  long local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c1e(local_58);
  for (puVar2 = auStack_78; puVar2 != auStack_78; puVar2 = puVar2 + -0x1000) {
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  }
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  local_60 = (void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar2 + -0x78) = 0x1017dd;
  memset((void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = (long)local_60 + -8;
  *(undefined8 *)(puVar2 + -0x78) = 0x101800;
  local_68 = FUN_00101d24(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x101817;
  FUN_00101d74(local_38,&local_68);
  uVar1 = local_38[0];
                    /* try { // try from 0010182e to 001018c3 has its CatchHandler @ 0010190f */
  *(undefined8 *)(puVar2 + -0x78) = 0x101833;
  FUN_00101da2(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x10183f;
  local_68 = FUN_00101d24(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x101856;
  FUN_00101d74(local_38,&local_68);
  uVar1 = local_38[0];
  *(undefined8 *)(puVar2 + -0x78) = 0x101872;
  FUN_00101da2(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x10187e;
  local_68 = FUN_00101d24(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x101895;
  FUN_00101d74(local_38,&local_68);
  *(undefined8 *)(puVar2 + -0x78) = 0x1018b1;
  FUN_00101da2(local_58,local_38[0],1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x1018c4;
  FUN_00101e68(local_38,local_58);
                    /* try { // try from 001018cb to 001018cf has its CatchHandler @ 001018fa */
  *(undefined8 *)(puVar2 + -0x78) = 0x1018d0;
  FUN_001014e9(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x1018dc;
  FUN_00101cdc(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x1018e8;
  FUN_00101cdc(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar2 + -0x78) = 0x101932;
  __stack_chk_fail();
}




void FUN_00102790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d76(param_1,param_3);
                    /* try { // try from 001027ca to 001027ce has its CatchHandler @ 001027d1 */
  FUN_00102dac(param_1,param_2);
  return;
}




void FUN_00103de5(void)

{
  return;
}




void FUN_00103d61(void)

{
  return;
}




void * FUN_00103725(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00101b62(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103835("Calling good()...");
  FUN_00101b52();
  FUN_00103835("Finished good()");
  FUN_00103835("Calling bad()...");
  FUN_0010171a();
  FUN_00103835("Finished bad()");
  return 0;
}




void FUN_00102f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103006(param_3);
  uVar2 = FUN_00103006(local_28);
  uVar3 = FUN_00103006(local_20);
  uVar1 = FUN_0010324b(uVar3,uVar2,uVar1);
  FUN_00103280(&local_30,uVar1);
  return;
}




void FUN_00103296(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010346d(param_1,param_2,param_3);
  return;
}




void FUN_001039b7(undefined4 param_1)

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




void FUN_00102134(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102ba0(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102654(local_80);
      local_60 = FUN_00102a2e(&local_88,&local_78);
      local_70 = FUN_00102c90(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00102024(local_80);
                    /* try { // try from 0010243e to 001024c9 has its CatchHandler @ 00102581 */
      FUN_00102b6b(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00102024(local_80);
      puVar2 = (undefined8 *)FUN_00102086(&local_88);
      local_70 = FUN_00102cc7(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00102024(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00102086(&local_88);
      local_70 = FUN_00102cc7(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00102024(local_80);
      FUN_00102036(*local_80,local_80[1],uVar1);
      FUN_00101fea(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010297c(local_38,param_1,param_4);
                    /* try { // try from 001021be to 00102391 has its CatchHandler @ 00102563 */
      local_50 = FUN_00102a10(local_38);
      local_78 = FUN_00101d24(local_80);
      local_48 = FUN_00102a2e(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00102024(local_80);
        FUN_00102a72(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00102086(&local_88);
        FUN_00102aca(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00102086(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00102086(&local_88);
        FUN_00102b1a(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00102024(local_80);
        lVar4 = FUN_00102b6b(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00102024(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00102086(&local_88);
        FUN_00102a72(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00102086(&local_88);
        FUN_00102b1a(*puVar2,local_40,local_50);
      }
      FUN_001029dc(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d1f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d4c(param_1,param_2);
  return param_1;
}




void FUN_00101b52(void)

{
  FUN_00101938();
  return;
}




void FUN_00102cc7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010310f(param_2);
  uVar2 = FUN_0010310f(param_1);
  FUN_00102f51(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00101d24(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102064(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103f88(undefined8 *param_1)

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




void FUN_00101fa8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103532(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103006(param_3);
  uVar2 = FUN_0010363b(local_28);
  uVar3 = FUN_0010363b(local_20);
  uVar1 = FUN_0010365c(uVar3,uVar2,uVar1);
  FUN_00103280(&local_30,uVar1);
  return;
}




void FUN_00102e9e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e8c(param_3);
  FUN_001031a0(param_1,param_2,uVar1);
  return;
}




void FUN_00103d98(void)

{
  return;
}




void FUN_00103dda(void)

{
  return;
}




void FUN_00102dac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102c90(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_00103006(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103d08(void)

{
  return 1;
}




undefined8 FUN_00103788(undefined8 *param_1)

{
  return *param_1;
}




bool FUN_00103f0a(pthread_t *param_1)

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




void FUN_00102e06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010316f(param_1,param_2,param_3);
  return;
}




void FUN_00104001(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103d6c(void)

{
  return;
}




void FUN_00101cdc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102024(param_1);
  FUN_00102036(*param_1,param_1[1],uVar1);
  FUN_00101c8a(param_1);
  return;
}




void FUN_00103018(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103330(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103508(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103df0(void)

{
  return;
}




void FUN_00101c8a(long *param_1)

{
  FUN_00101fea(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101bde(param_1);
  return;
}




undefined8 FUN_00102e8c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010365c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103725(param_1,param_2,param_3);
  return;
}




void FUN_00103835(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102e3c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010390b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102064(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001026a0(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00102064(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101bc7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001030e1(undefined8 param_1,undefined8 param_2)

{
  FUN_00103330(param_1,param_2,0);
  return;
}




void FUN_00103dc4(void)

{
  return;
}




void FUN_00101fda(void)

{
  return;
}




void FUN_00101bfe(undefined8 param_1)

{
  FUN_00101c3e(param_1);
  return;
}




long FUN_001020ef(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010296a(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010296a(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102d76(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d4c(param_1,param_2);
  FUN_00101fa8(param_1);
  return;
}




void FUN_00103dae(void)

{
  return;
}




undefined8 FUN_00103e3d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103e06,local_18);
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




void FUN_00102aca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f86(param_2);
  uVar2 = FUN_00102f86(param_1);
  FUN_00102f98(uVar2,uVar1,param_3);
  return;
}




ulong FUN_00102ba0(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_0010308c(param_1);
  lVar2 = FUN_00102706(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102706(local_40);
  local_30 = FUN_00102706(local_40);
  plVar3 = (long *)FUN_001030b2(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102706(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_0010308c(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_0010308c(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102d4c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010315c(param_1,param_2);
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_FS_OFFSET;
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
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_001016f6(param_1,2);
  puVar1 = (undefined8 *)*plVar2;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_00103835(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




void FUN_00101fea(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001028eb(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103d8d(void)

{
  return;
}




void FUN_001038b5(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001028dc(void)

{
  return;
}




undefined8 FUN_0010284e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102948(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001029dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e76(param_1);
  FUN_00102edb(*param_1,uVar1);
  return;
}




undefined8 FUN_0010363b(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010296a(&local_10);
  return *puVar1;
}




undefined8 FUN_0010296a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001027f6(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102948(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103d17(void)

{
  return 0;
}




void FUN_00102948(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_0010310f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031f8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102e76(long param_1)

{
  return param_1 + 8;
}




void FUN_001028eb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e3c(param_1,param_2,param_3);
  return;
}




void FUN_00103d82(void)

{
  return;
}




long FUN_00102a2e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102086(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102086(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001031e4(void)

{
  return;
}



