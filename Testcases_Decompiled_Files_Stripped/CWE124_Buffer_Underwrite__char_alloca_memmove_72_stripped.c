
void FUN_0010378f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010396d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103c74(void)

{
  return;
}




void FUN_00103945(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001030a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032aa(param_1,param_2,param_3);
  return;
}




void FUN_00101b52(undefined8 param_1)

{
  FUN_00101b32(param_1);
  return;
}




undefined8 FUN_00103454(undefined8 param_1)

{
  return param_1;
}




void FUN_0010317f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010332b(param_1,param_2,param_3);
  return;
}




void FUN_00103d3a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101b72(undefined8 param_1)

{
  FUN_00101ebc(param_1);
  FUN_00101edc(param_1);
  return;
}




void FUN_001027da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d3a(param_1,param_2,param_3);
  return;
}




void FUN_00102851(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d97(param_1,param_2);
  return;
}




ulong * FUN_0010340d(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_001026b2(undefined8 param_1)

{
  return param_1;
}




void FUN_001029a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e39(param_2);
  uVar2 = FUN_00102e39(param_1);
  FUN_00102e85(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001033ef(undefined8 param_1)

{
  FUN_0010343c(param_1);
  return;
}




void FUN_001032aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103454(param_2);
  uVar2 = FUN_00103454(param_1);
  FUN_00103466(uVar2,uVar1,param_3);
  return;
}




void FUN_00101b12(undefined8 param_1)

{
  FUN_00101b9e(param_1);
  return;
}




void FUN_001034d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035c5(param_2);
  uVar2 = FUN_001035c5(param_1);
  FUN_001035eb(uVar2,uVar1,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




ulong FUN_00103a59(long param_1,ulong param_2,long param_3)

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




void FUN_00103cab(void)

{
  return;
}




void FUN_00102f8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031ca(param_1,param_2,param_3);
  return;
}




void FUN_00102a9f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f8a(param_1,param_2,param_3);
  return;
}




void FUN_00103998(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101fba(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102eba(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e0f(undefined8 param_1,undefined8 param_2)

{
  FUN_00103118(param_1,param_2);
  return;
}




void FUN_00102944(undefined8 param_1)

{
  FUN_00102daa(param_1);
  return;
}




void FUN_00103d03(void)

{
  return;
}




long FUN_0010332b(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00103f73(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102bc4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103015(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103cd7(void)

{
  return;
}




void FUN_00103c7f(void)

{
  return;
}




void FUN_001035c5(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001036bc(&local_10);
  FUN_00102eba(uVar1);
  return;
}




void FUN_00103895(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001038c0(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103e99(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001039f9(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001032fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034d4(param_1,param_2,param_3);
  return;
}




void FUN_001033a1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102f3a(param_1);
  uVar1 = FUN_00103524(uVar1,param_2,param_3);
  FUN_001031b4(&local_10,uVar1);
  return;
}




void FUN_001028b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102dc0(param_3);
  uVar2 = FUN_00102daa(param_1);
  FUN_00102dd2(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010186c(void)

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
  FUN_00101b52(local_58);
  for (puVar2 = auStack_78; puVar2 != auStack_78; puVar2 = puVar2 + -0x1000) {
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  }
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  local_60 = (void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar2 + -0x78) = 0x10192f;
  memset((void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = local_60;
  *(undefined8 *)(puVar2 + -0x78) = 0x10194e;
  local_68 = FUN_00101c58(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x101965;
  FUN_00101ca8(local_38,&local_68);
  uVar1 = local_38[0];
                    /* try { // try from 0010197c to 00101a11 has its CatchHandler @ 00101a5d */
  *(undefined8 *)(puVar2 + -0x78) = 0x101981;
  FUN_00101cd6(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x10198d;
  local_68 = FUN_00101c58(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x1019a4;
  FUN_00101ca8(local_38,&local_68);
  uVar1 = local_38[0];
  *(undefined8 *)(puVar2 + -0x78) = 0x1019c0;
  FUN_00101cd6(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x1019cc;
  local_68 = FUN_00101c58(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x1019e3;
  FUN_00101ca8(local_38,&local_68);
  *(undefined8 *)(puVar2 + -0x78) = 0x1019ff;
  FUN_00101cd6(local_58,local_38[0],1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x101a12;
  FUN_00101d9c(local_38,local_58);
                    /* try { // try from 00101a19 to 00101a1d has its CatchHandler @ 00101a48 */
  *(undefined8 *)(puVar2 + -0x78) = 0x101a1e;
  FUN_00101589(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x101a2a;
  FUN_00101c10(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x101a36;
  FUN_00101c10(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar2 + -0x78) = 0x101a80;
  __stack_chk_fail();
}




void * FUN_00103706(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101d9c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001026b2(param_2);
  FUN_00102661(&local_31,uVar1);
  uVar1 = FUN_0010263a(param_2);
                    /* try { // try from 00101e02 to 00101e06 has its CatchHandler @ 00101e6f */
  FUN_001026c4(param_1,uVar1,&local_31);
  FUN_00101b9e(&local_31);
  uVar2 = FUN_00101f58(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102782(param_2);
  uVar4 = FUN_0010272a(param_2);
                    /* try { // try from 00101e50 to 00101e54 has its CatchHandler @ 00101e8d */
  uVar1 = FUN_001027da(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e85(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010314a(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102588(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f98(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001037c1(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103d2f(void)

{
  return;
}




void FUN_0010312c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010314a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032fa(param_1,param_2,param_3);
  return;
}




void FUN_00102fc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026b2(param_1);
  FUN_001031fb(uVar1);
  return;
}




undefined8 FUN_001031b4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




int FUN_00103c5a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101fcc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010287c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c8a(void)

{
  return;
}




void FUN_00102d97(void)

{
  return;
}




void FUN_001035eb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f3a(param_3);
  uVar2 = FUN_00102f3a(local_28);
  uVar3 = FUN_00102f3a(local_20);
  uVar1 = FUN_001036d1(uVar3,uVar2,uVar1);
  FUN_001031b4(&local_30,uVar1);
  return;
}




long FUN_0010162a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_00102e39(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010312c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101589(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010162a(param_1,2);
  __dest = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(__dest,local_78,100);
  *(undefined *)((long)__dest + 99) = 0;
  FUN_00103769(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001039c6(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001030d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102dc0(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101afb(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103fa0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_0010343c(void)

{
  return 0xfffffffffffffff;
}




ulong * FUN_00102fe6(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00101ebc(undefined8 param_1)

{
  FUN_00102810(param_1);
  return;
}




undefined8 FUN_00102661(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c53(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 * FUN_00103524(undefined8 *param_1,long param_2,undefined8 *param_3)

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




ulong FUN_00103b5d(long param_1,ulong param_2,long param_3)

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




void FUN_00103815(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001036d1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103706(param_1,param_2,param_3);
  return;
}




void FUN_00103f54(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101cd6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101fcc(param_1);
  local_18 = FUN_00102023(&local_38,&local_20);
  local_20 = FUN_00102588(local_30);
  uVar1 = FUN_001025d4(&local_20,local_18);
  FUN_00102068(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102588(local_30);
  FUN_001025d4(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f6a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102851(param_1,param_2);
  return;
}




void FUN_00101b9e(undefined8 param_1)

{
  FUN_00101f0e(param_1);
  return;
}




void FUN_00103ced(void)

{
  return;
}




long FUN_0010263a(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_001031fb(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001033ef(param_1);
  puVar1 = (undefined8 *)FUN_0010340d(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00102a4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f3a(param_2);
  uVar2 = FUN_00102f3a(param_1);
  FUN_00102f4c(uVar2,uVar1,param_3);
  return;
}




void FUN_00101ca8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101fba(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103090(void)

{
  return;
}




void FUN_00104010(void)

{
  return;
}




void FUN_0010386a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101f58(undefined8 param_1)

{
  return param_1;
}




void FUN_0010164e(void)

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
  FUN_00101b52(local_58);
  for (puVar2 = auStack_78; puVar2 != auStack_78; puVar2 = puVar2 + -0x1000) {
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  }
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  local_60 = (void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar2 + -0x78) = 0x101711;
  memset((void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = (long)local_60 + -8;
  *(undefined8 *)(puVar2 + -0x78) = 0x101734;
  local_68 = FUN_00101c58(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x10174b;
  FUN_00101ca8(local_38,&local_68);
  uVar1 = local_38[0];
                    /* try { // try from 00101762 to 001017f7 has its CatchHandler @ 00101843 */
  *(undefined8 *)(puVar2 + -0x78) = 0x101767;
  FUN_00101cd6(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x101773;
  local_68 = FUN_00101c58(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x10178a;
  FUN_00101ca8(local_38,&local_68);
  uVar1 = local_38[0];
  *(undefined8 *)(puVar2 + -0x78) = 0x1017a6;
  FUN_00101cd6(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x1017b2;
  local_68 = FUN_00101c58(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x1017c9;
  FUN_00101ca8(local_38,&local_68);
  *(undefined8 *)(puVar2 + -0x78) = 0x1017e5;
  FUN_00101cd6(local_58,local_38[0],1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x1017f8;
  FUN_00101d9c(local_38,local_58);
                    /* try { // try from 001017ff to 00101803 has its CatchHandler @ 0010182e */
  *(undefined8 *)(puVar2 + -0x78) = 0x101804;
  FUN_001014e9(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x101810;
  FUN_00101c10(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x10181c;
  FUN_00101c10(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar2 + -0x78) = 0x101866;
  __stack_chk_fail();
}




void FUN_001026c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102caa(param_1,param_3);
                    /* try { // try from 001026fe to 00102702 has its CatchHandler @ 00102705 */
  FUN_00102ce0(param_1,param_2);
  return;
}




void FUN_00103d19(void)

{
  return;
}




void FUN_00103c95(void)

{
  return;
}




void * FUN_00103659(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00101a96(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103769("Calling good()...");
  FUN_00101a86();
  FUN_00103769("Finished good()");
  FUN_00103769("Calling bad()...");
  FUN_0010164e();
  FUN_00103769("Finished bad()");
  return 0;
}




void FUN_00102ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f3a(param_3);
  uVar2 = FUN_00102f3a(local_28);
  uVar3 = FUN_00102f3a(local_20);
  uVar1 = FUN_0010317f(uVar3,uVar2,uVar1);
  FUN_001031b4(&local_30,uVar1);
  return;
}




void FUN_001031ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033a1(param_1,param_2,param_3);
  return;
}




void FUN_001038eb(undefined4 param_1)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




void FUN_00102068(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102ad4(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102588(local_80);
      local_60 = FUN_00102962(&local_88,&local_78);
      local_70 = FUN_00102bc4(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f58(local_80);
                    /* try { // try from 00102372 to 001023fd has its CatchHandler @ 001024b5 */
      FUN_00102a9f(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f58(local_80);
      puVar2 = (undefined8 *)FUN_00101fba(&local_88);
      local_70 = FUN_00102bfb(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f58(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101fba(&local_88);
      local_70 = FUN_00102bfb(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f58(local_80);
      FUN_00101f6a(*local_80,local_80[1],uVar1);
      FUN_00101f1e(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001028b0(local_38,param_1,param_4);
                    /* try { // try from 001020f2 to 001022c5 has its CatchHandler @ 00102497 */
      local_50 = FUN_00102944(local_38);
      local_78 = FUN_00101c58(local_80);
      local_48 = FUN_00102962(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f58(local_80);
        FUN_001029a6(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101fba(&local_88);
        FUN_001029fe(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101fba(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101fba(&local_88);
        FUN_00102a4e(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f58(local_80);
        lVar4 = FUN_00102a9f(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f58(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101fba(&local_88);
        FUN_001029a6(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101fba(&local_88);
        FUN_00102a4e(*puVar2,local_40,local_50);
      }
      FUN_00102910(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c53(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c80(param_1,param_2);
  return param_1;
}




void FUN_00101a86(void)

{
  FUN_0010186c();
  return;
}




void FUN_00102bfb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103043(param_2);
  uVar2 = FUN_00103043(param_1);
  FUN_00102e85(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00101c58(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f98(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103ebc(undefined8 *param_1)

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




void FUN_00101edc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103466(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f3a(param_3);
  uVar2 = FUN_0010356f(local_28);
  uVar3 = FUN_0010356f(local_20);
  uVar1 = FUN_00103590(uVar3,uVar2,uVar1);
  FUN_001031b4(&local_30,uVar1);
  return;
}




void FUN_00102dd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102dc0(param_3);
  FUN_001030d4(param_1,param_2,uVar1);
  return;
}




void FUN_00103ccc(void)

{
  return;
}




void FUN_00103d0e(void)

{
  return;
}




void FUN_00102ce0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102bc4(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_00102f3a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103c3c(void)

{
  return 1;
}




undefined8 FUN_001036bc(undefined8 *param_1)

{
  return *param_1;
}




bool FUN_00103e3e(pthread_t *param_1)

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




void FUN_00102d3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030a3(param_1,param_2,param_3);
  return;
}




void FUN_00103f35(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103ca0(void)

{
  return;
}




void FUN_00101c10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f58(param_1);
  FUN_00101f6a(*param_1,param_1[1],uVar1);
  FUN_00101bbe(param_1);
  return;
}




void FUN_00102f4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103264(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010343c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103d24(void)

{
  return;
}




void FUN_00101bbe(long *param_1)

{
  FUN_00101f1e(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101b12(param_1);
  return;
}




undefined8 FUN_00102dc0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103659(param_1,param_2,param_3);
  return;
}




void FUN_00103769(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102d70(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010383f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f98(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001025d4(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f98(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101afb(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103015(undefined8 param_1,undefined8 param_2)

{
  FUN_00103264(param_1,param_2,0);
  return;
}




void FUN_00103cf8(void)

{
  return;
}




void FUN_00101f0e(void)

{
  return;
}




void FUN_00101b32(undefined8 param_1)

{
  FUN_00101b72(param_1);
  return;
}




long FUN_00102023(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010289e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010289e(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102caa(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c80(param_1,param_2);
  FUN_00101edc(param_1);
  return;
}




void FUN_00103ce2(void)

{
  return;
}




undefined8 FUN_00103d71(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d3a,local_18);
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




void FUN_001029fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102eba(param_2);
  uVar2 = FUN_00102eba(param_1);
  FUN_00102ecc(uVar2,uVar1,param_3);
  return;
}




ulong FUN_00102ad4(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102fc0(param_1);
  lVar2 = FUN_0010263a(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010263a(local_40);
  local_30 = FUN_0010263a(local_40);
  plVar3 = (long *)FUN_00102fe6(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010263a(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102fc0(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102fc0(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102c80(undefined8 param_1,undefined8 param_2)

{
  FUN_00103090(param_1,param_2);
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010162a(param_1,2);
  __dest = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(__dest,local_78,100);
  *(undefined *)((long)__dest + 99) = 0;
  FUN_00103769(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f1e(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010281f(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103cc1(void)

{
  return;
}




void FUN_001037e9(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102810(void)

{
  return;
}




undefined8 FUN_00102782(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010287c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102910(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102daa(param_1);
  FUN_00102e0f(*param_1,uVar1);
  return;
}




undefined8 FUN_0010356f(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010289e(&local_10);
  return *puVar1;
}




undefined8 FUN_0010289e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010272a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010287c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103c4b(void)

{
  return 0;
}




void FUN_0010287c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103043(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010312c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102daa(long param_1)

{
  return param_1 + 8;
}




void FUN_0010281f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d70(param_1,param_2,param_3);
  return;
}




void FUN_00103cb6(void)

{
  return;
}




long FUN_00102962(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101fba(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101fba(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103118(void)

{
  return;
}



