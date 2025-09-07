
void FUN_001028ed(void)

{
  return;
}




void FUN_00102288(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102523(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102b98(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001025d0(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010292f(void)

{
  return;
}




void FUN_00101a9a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101cc6(param_2);
  FUN_00101c75(&local_21,uVar1);
  FUN_00101cd8(param_1,&local_21);
  FUN_00101a14(&local_21);
  uVar1 = FUN_00101d60(param_2);
  uVar2 = FUN_00101d10(param_2);
                    /* try { // try from 00101b26 to 00101b2a has its CatchHandler @ 00101b2d */
  FUN_00101dac(param_1,uVar2,uVar1);
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




void FUN_0010295b(void)

{
  return;
}




void FUN_00101932(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101cc6(undefined8 param_1)

{
  return param_1;
}




long FUN_00102230(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




long * FUN_00101596(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101b96(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001015fa(local_20);
    uVar3 = FUN_00101e1a(param_1);
    FUN_00101e2c(uVar3,uVar2);
    FUN_00101e56(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102c10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101fba(undefined8 param_1,undefined8 param_2)

{
  FUN_00102252(param_1,param_2);
  return;
}




void FUN_00101e2c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102110(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00102c80(void)

{
  return;
}




void FUN_001015ba(undefined8 *param_1)

{
  FUN_001015fa(*param_1);
  return;
}




void FUN_0010299d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001023b4(void)

{
  return 0x555555555555555;
}




bool FUN_00102aa1(pthread_t *param_1)

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




void FUN_00102903(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




undefined8 FUN_001028ae(void)

{
  return 0;
}




undefined8 FUN_00101896(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001023cc("Calling good()...");
  FUN_00101886();
  FUN_001023cc("Finished good()");
  FUN_001023cc("Calling bad()...");
  FUN_0010164c();
  FUN_001023cc("Finished bad()");
  return 0;
}




void FUN_001023cc(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010163a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010154a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001015dc(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010164c(void)

{
  long in_FS_OFFSET;
  undefined8 *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019a8(local_58);
  local_60 = (undefined8 *)0x0;
  local_60 = (undefined8 *)malloc(8);
  if (local_60 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 0x7ffffffb;
                    /* try { // try from 001016b6 to 001016f3 has its CatchHandler @ 0010173f */
  FUN_00101a60(local_58,&local_60);
  FUN_00101a60(local_58,&local_60);
  FUN_00101a60(local_58,&local_60);
  FUN_00101a9a(local_38,local_58);
                    /* try { // try from 001016fb to 001016ff has its CatchHandler @ 0010172a */
  FUN_00101469(local_38);
  FUN_001019c8(local_38);
  FUN_001019c8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102123(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102288(param_1,param_2,param_3);
  return;
}




void FUN_00101469(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014ec(param_1);
  puVar1 = (undefined8 *)*puVar1;
  FUN_001024cd(*puVar1);
  free(puVar1);
  return;
}




int FUN_001028bd(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102266(long param_1)

{
  FUN_00102334(param_1 + 0x10);
  return;
}




void FUN_001019a8(undefined8 param_1)

{
  FUN_00101988(param_1);
  return;
}




void FUN_00102424(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101d10(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102038(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102afc(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001020a0(undefined8 *param_1)

{
  FUN_00102266(*param_1);
  return;
}




void FUN_001023f2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_0010289f(void)

{
  return 1;
}




undefined8 FUN_00102056(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00101a34(undefined8 param_1)

{
  FUN_00101b96(param_1);
  FUN_00101968(param_1);
  return;
}




void FUN_001025fb(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001024f8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101912(undefined8 param_1)

{
  FUN_00101932(param_1);
  return;
}




void FUN_00101e0a(void)

{
  return;
}




void FUN_001024cd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001024a2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001025a8(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101fe4(undefined8 param_1)

{
  return param_1;
}




void FUN_001021f3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e85(param_3);
  FUN_001022f0(param_1,param_2,uVar1);
  return;
}




void FUN_001022f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101e85(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018fb(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010217a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022dd(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101968(undefined8 param_1)

{
  FUN_00101a14(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




undefined8 FUN_00102b1f(undefined8 *param_1)

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




undefined8 FUN_001022dd(undefined8 param_1)

{
  return param_1;
}




void FUN_00102110(void)

{
  return;
}




void FUN_00102252(void)

{
  return;
}




void FUN_0010265c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_001026bc(long param_1,ulong param_2,long param_3)

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




void FUN_001014aa(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014ec(param_1);
  puVar1 = (undefined8 *)*puVar1;
  FUN_001024cd(*puVar1);
  free(puVar1);
  return;
}




void FUN_0010244c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001028e2(void)

{
  return;
}




undefined8 * FUN_0010207c(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010290e(void)

{
  return;
}




void FUN_001021b4(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102123(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001028d7(void)

{
  return;
}




void FUN_00101f62(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_0010297c(void)

{
  return;
}




void FUN_00102992(void)

{
  return;
}




void FUN_00102950(void)

{
  return;
}




void FUN_00101dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102056(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001020a0(&local_18);
    FUN_001020c2(local_10,uVar2);
    FUN_0010207c(&local_18);
  }
  return;
}




void FUN_00102971(void)

{
  return;
}




void FUN_00102038(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101a60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010154a(param_1);
  FUN_00101c14(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_00101f8c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fba(param_1,param_2);
  return param_1;
}




void FUN_00102334(undefined8 param_1)

{
  FUN_001023a2(param_1);
  return;
}




void FUN_00102924(void)

{
  return;
}




void FUN_00102945(void)

{
  return;
}




void FUN_0010161c(undefined8 param_1)

{
  FUN_0010163a(param_1);
  return;
}




void FUN_001019c8(undefined8 param_1)

{
  FUN_00101a34(param_1);
  return;
}




undefined8 FUN_00101e98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102156(param_1);
  uVar2 = FUN_00101e1a(param_1);
  FUN_0010217a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e85(param_2);
  uVar4 = FUN_001015fa(uVar1);
  FUN_001021f3(uVar2,uVar4,uVar3);
  FUN_00102230(local_38,0);
  FUN_001021b4(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_001018fb(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001022af(undefined8 param_1,undefined8 param_2)

{
  FUN_00102352(param_1,param_2,0);
  return;
}




void FUN_00102629(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_001027c0(long param_1,ulong param_2,long param_3)

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




void FUN_00101e56(undefined8 param_1,undefined8 param_2)

{
  FUN_00102123(param_1,param_2,1);
  return;
}




void FUN_00101988(undefined8 param_1)

{
  FUN_001019e8(param_1);
  return;
}




void FUN_00101a14(undefined8 param_1)

{
  FUN_00101b86(param_1);
  return;
}




void FUN_001014ec(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010154a(param_1);
  FUN_00101596(&local_18);
  FUN_001015ba(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e1a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bd6(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b66(undefined8 param_1)

{
  FUN_00101e0a(param_1);
  return;
}




void FUN_00102352(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001023b4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00101c75(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f8c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010254e(undefined4 param_1)

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




void FUN_00102bb7(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001029d4(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010299d,local_18);
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




void FUN_00101ff6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fe4(param_2);
  FUN_00101fba(param_1,uVar1);
  FUN_00101912(param_1);
  return;
}




void FUN_001019e8(undefined8 param_1)

{
  FUN_00101b66(param_1);
  FUN_00101912(param_1);
  return;
}




void FUN_00101b86(void)

{
  return;
}




void FUN_00102966(void)

{
  return;
}




void FUN_001015fa(long param_1)

{
  FUN_0010161c(param_1 + 0x10);
  return;
}




undefined8 FUN_001023a2(undefined8 param_1)

{
  return param_1;
}




void FUN_00101886(void)

{
  FUN_00101769();
  return;
}




undefined8 FUN_00101d60(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102038(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102478(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102156(undefined8 param_1)

{
  FUN_001022af(param_1,1);
  return;
}




void FUN_00102987(void)

{
  return;
}




void FUN_00101cd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fe4(param_2);
  FUN_00101ff6(param_1,uVar1);
  return;
}




void FUN_001020c2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e85(param_2);
  uVar2 = FUN_0010154a(param_1);
  FUN_00101c14(param_1,uVar2,uVar1);
  return;
}




void FUN_001015dc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001028f8(void)

{
  return;
}




void FUN_00102919(void)

{
  return;
}




void FUN_00101769(void)

{
  long in_FS_OFFSET;
  undefined8 *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019a8(local_58);
  local_60 = (undefined8 *)0x0;
  local_60 = (undefined8 *)malloc(8);
  if (local_60 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 0x7ffffffb;
                    /* try { // try from 001017d3 to 00101810 has its CatchHandler @ 0010185c */
  FUN_00101a60(local_58,&local_60);
  FUN_00101a60(local_58,&local_60);
  FUN_00101a60(local_58,&local_60);
  FUN_00101a9a(local_38,local_58);
                    /* try { // try from 00101818 to 0010181c has its CatchHandler @ 00101847 */
  FUN_001014aa(local_38);
  FUN_001019c8(local_38);
  FUN_001019c8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e85(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e85(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e98(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f62(param_1,1);
  return;
}




void FUN_0010293a(void)

{
  return;
}



