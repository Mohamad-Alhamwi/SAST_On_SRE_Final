
void FUN_00101ff2(undefined8 param_1,undefined8 param_2)

{
  FUN_001022d6(param_1,param_2);
  return;
}




void FUN_0010179c(undefined8 param_1)

{
  FUN_001017ba(param_1);
  return;
}




void FUN_00101c26(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016ca(param_1);
  FUN_00101dda(param_1,uVar1,param_2);
  return;
}




void FUN_00102418(void)

{
  return;
}




void FUN_00101d4c(void)

{
  return;
}




void FUN_00102aa8(void)

{
  return;
}




void FUN_00102180(undefined8 param_1,undefined8 param_2)

{
  FUN_00102418(param_1,param_2);
  return;
}




void FUN_00102b37(void)

{
  return;
}




void FUN_00102d9c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_0010221c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102b58(void)

{
  return;
}




void FUN_0010173a(undefined8 *param_1)

{
  FUN_0010177a(*param_1);
  return;
}




void FUN_00102822(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010244e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102dd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010231c(undefined8 param_1)

{
  FUN_00102475(param_1,1);
  return;
}




void FUN_0010242c(long param_1)

{
  FUN_001024fa(param_1 + 0x10);
  return;
}




void FUN_00101ad8(undefined8 param_1)

{
  FUN_00101af8(param_1);
  return;
}




void FUN_00102b16(void)

{
  return;
}




void FUN_00102aea(void)

{
  return;
}




void FUN_0010237a(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001022e9(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_0010257a(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00102ce5(undefined8 *param_1)

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




undefined8 FUN_0010204b(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b0b(void)

{
  return;
}




undefined8 FUN_00101f26(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021fe(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00102a83(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001027ef(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101af8(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




ulong FUN_00102882(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102668(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001026be(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102a65(void)

{
  return 1;
}




void FUN_00101469(undefined8 param_1)

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
  plVar2 = (long *)FUN_0010166c(param_1);
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
  FUN_00102592(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f72(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010221c(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102266(&local_18);
    FUN_00102288(local_10,uVar2);
    FUN_00102242(&local_18);
  }
  return;
}




void FUN_0010177a(long param_1)

{
  FUN_0010179c(param_1 + 0x10);
  return;
}




void FUN_00101b4e(undefined8 param_1)

{
  FUN_00101bae(param_1);
  return;
}




void FUN_001025b8(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102b21(void)

{
  return;
}




void FUN_001023b9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010204b(param_3);
  FUN_001024b6(param_1,param_2,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_00101b2e(undefined8 param_1)

{
  FUN_00101bda(param_1);
  return;
}




undefined8 FUN_00101ed6(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021fe(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00102b63(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010177a(local_20);
    uVar3 = FUN_00101fe0(param_1);
    FUN_00101ff2(uVar3,uVar2);
    FUN_0010201c(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102475(undefined8 param_1,undefined8 param_2)

{
  FUN_00102518(param_1,param_2,0);
  return;
}




void FUN_00101bfa(undefined8 param_1)

{
  FUN_00101d5c(param_1);
  FUN_00101b2e(param_1);
  return;
}




undefined8 FUN_00102a74(void)

{
  return 0;
}




void FUN_00101bda(undefined8 param_1)

{
  FUN_00101d4c(param_1);
  return;
}




void FUN_00101bae(undefined8 param_1)

{
  FUN_00101d2c(param_1);
  FUN_00101ad8(param_1);
  return;
}




void FUN_00101d2c(undefined8 param_1)

{
  FUN_00101fd0(param_1);
  return;
}




long * FUN_00101716(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_0010190e(void)

{
  long in_FS_OFFSET;
  undefined *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b6e(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d0 = local_88;
                    /* try { // try from 00101975 to 001019c4 has its CatchHandler @ 00101a1c */
  FUN_00101c26(local_c8,&local_d0);
  FUN_00101c26(local_c8,&local_d0);
  FUN_00101c26(local_c8,&local_d0);
  FUN_00101c60(local_a8,local_c8);
                    /* try { // try from 001019cf to 001019d3 has its CatchHandler @ 00101a04 */
  FUN_0010156a(local_a8);
  FUN_00101b8e(local_a8);
  FUN_00101b8e(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010166c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016ca(param_1);
  FUN_00101716(&local_18);
  FUN_0010173a(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00102c67(pthread_t *param_1)

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




void FUN_00102612(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102ab3(void)

{
  return;
}




long FUN_001023f6(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102796(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001017cc(void)

{
  long in_FS_OFFSET;
  undefined *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [24];
  undefined auStack_90 [8];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b6e(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d0 = auStack_90;
                    /* try { // try from 00101837 to 00101886 has its CatchHandler @ 001018de */
  FUN_00101c26(local_c8,&local_d0);
  FUN_00101c26(local_c8,&local_d0);
  FUN_00101c26(local_c8,&local_d0);
  FUN_00101c60(local_a8,local_c8);
                    /* try { // try from 00101891 to 00101895 has its CatchHandler @ 001018c6 */
  FUN_00101469(local_a8);
  FUN_00101b8e(local_a8);
  FUN_00101b8e(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013b0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_0010175c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101e3b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102152(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101e8c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b6e(undefined8 param_1)

{
  FUN_00101b4e(param_1);
  return;
}




undefined8 FUN_00101fe0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102b9a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b63,local_18);
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




void FUN_00102ad4(void)

{
  return;
}




undefined8 FUN_00102cc2(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_0010205e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010231c(param_1);
  uVar2 = FUN_00101fe0(param_1);
  FUN_00102340(local_38,uVar2,uVar1);
  uVar3 = FUN_0010204b(param_2);
  uVar4 = FUN_0010177a(uVar1);
  FUN_001023b9(uVar2,uVar4,uVar3);
  FUN_001023f6(local_38,0);
  FUN_0010237a(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




ulong FUN_00102986(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001016ca(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010175c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101fd0(void)

{
  return;
}




void FUN_00102288(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010204b(param_2);
  uVar2 = FUN_001016ca(param_1);
  FUN_00101dda(param_1,uVar2,uVar1);
  return;
}




void FUN_001022e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010244e(param_1,param_2,param_3);
  return;
}




void FUN_001021fe(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102b4d(void)

{
  return;
}




void FUN_001024fa(undefined8 param_1)

{
  FUN_00102568(param_1);
  return;
}




void FUN_00102266(undefined8 *param_1)

{
  FUN_0010242c(*param_1);
  return;
}




void FUN_0010263e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102adf(void)

{
  return;
}




void FUN_00101a4c(void)

{
  FUN_0010190e();
  return;
}




undefined8 FUN_00102152(undefined8 param_1,undefined8 param_2)

{
  FUN_00102180(param_1,param_2);
  return param_1;
}




void FUN_001021bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021aa(param_2);
  FUN_00102180(param_1,uVar1);
  FUN_00101ad8(param_1);
  return;
}




undefined8 FUN_00102568(undefined8 param_1)

{
  return param_1;
}




void FUN_001027c1(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102d7d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102d5e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102e40(void)

{
  return;
}




void FUN_00102714(undefined4 param_1)

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




void FUN_00102a9d(void)

{
  return;
}




undefined8 FUN_001017ba(undefined8 param_1)

{
  return param_1;
}




void FUN_00102518(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010257a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001024b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0010204b(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101ac1(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101dda(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_0010204b(param_3);
  p_Var2 = (_List_node_base *)FUN_0010205e(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102128(param_1,1);
  return;
}




void FUN_00101e9e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021aa(param_2);
  FUN_001021bc(param_1,uVar1);
  return;
}




void FUN_00102abe(void)

{
  return;
}




void FUN_001026e9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101a5c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102592("Calling good()...");
  FUN_00101a4c();
  FUN_00102592("Finished good()");
  FUN_00102592("Calling bad()...");
  FUN_001017cc();
  FUN_00102592("Finished bad()");
  return 0;
}




void FUN_00101c60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101e8c(param_2);
  FUN_00101e3b(&local_21,uVar1);
  FUN_00101e9e(param_1,&local_21);
  FUN_00101bda(&local_21);
  uVar1 = FUN_00101f26(param_2);
  uVar2 = FUN_00101ed6(param_2);
                    /* try { // try from 00101cec to 00101cf0 has its CatchHandler @ 00101cf3 */
  FUN_00101f72(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102340(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024a3(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_001024a3(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00102242(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001025ea(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102b42(void)

{
  return;
}




undefined8 FUN_00101ac1(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102592(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102693(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102ac9(void)

{
  return;
}




void FUN_00102b2c(void)

{
  return;
}




void FUN_0010276e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101b8e(undefined8 param_1)

{
  FUN_00101bfa(param_1);
  return;
}




void FUN_0010156a(undefined8 param_1)

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
  plVar2 = (long *)FUN_0010166c(param_1);
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
  FUN_00102592(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001022d6(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_0010201c(undefined8 param_1,undefined8 param_2)

{
  FUN_001022e9(param_1,param_2,1);
  return;
}




void FUN_00102128(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_001021aa(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b00(void)

{
  return;
}




void FUN_00102af5(void)

{
  return;
}



