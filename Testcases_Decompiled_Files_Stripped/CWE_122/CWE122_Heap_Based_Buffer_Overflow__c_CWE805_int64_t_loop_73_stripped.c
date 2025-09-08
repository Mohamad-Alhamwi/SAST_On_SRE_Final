
undefined8 FUN_00101ee8(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001017ee(undefined8 param_1)

{
  FUN_0010196c(param_1);
  FUN_00101718(param_1);
  return;
}




void FUN_00101c5c(void)

{
  return;
}




undefined8 FUN_00102264(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ca0(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fc0(param_1,param_2);
  return;
}




void FUN_00102a16(void)

{
  return;
}




void FUN_00101fd3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010214a(param_1,param_2,param_3);
  return;
}




void FUN_00102aa5(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_001020a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d18(param_3);
  FUN_001021b2(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102c0f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010178e(undefined8 param_1)

{
  FUN_001017ee(param_1);
  return;
}




undefined8 FUN_001029b2(void)

{
  return 1;
}




void FUN_0010228e(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  ulong local_348;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010243c(param_1);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    puVar1[local_348] = local_338[local_348];
  }
  FUN_001025e0(*puVar1);
  free(puVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102171(undefined8 param_1,undefined8 param_2)

{
  FUN_00102214(param_1,param_2,0);
  return;
}




undefined8 FUN_00102276(void)

{
  return 0x555555555555555;
}




void FUN_0010199c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101c6c(local_20);
    uVar3 = FUN_00101c8e(param_1);
    FUN_00101ca0(uVar3,uVar2);
    FUN_00101cca(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102a84(void)

{
  return;
}




void FUN_00102a58(void)

{
  return;
}




void FUN_001021b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101d18(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101702(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102537(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102d20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101f32(undefined8 *param_1)

{
  FUN_00102116(*param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00102a79(void)

{
  return;
}




void FUN_00101e4c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102102(param_1,param_2);
  return;
}




void FUN_00102a00(void)

{
  return;
}




ulong FUN_001028d3(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101a1a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cfa(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001029c1(void)

{
  return 0;
}




void FUN_00102636(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001026bb(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001029ea(void)

{
  return;
}




undefined8 FUN_0010169d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024df("Calling good()...");
  FUN_0010168d();
  FUN_001024df("Finished good()");
  FUN_001024df("Calling bad()...");
  FUN_00101469();
  FUN_001024df("Finished bad()");
  return 0;
}




undefined8 FUN_00101e76(undefined8 param_1)

{
  return param_1;
}




void FUN_001017ce(undefined8 param_1)

{
  FUN_0010183a(param_1);
  return;
}




undefined8 FUN_00101ac7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e1e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010258b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102a8f(void)

{
  return;
}




void FUN_001021f6(undefined8 param_1)

{
  FUN_00102264(param_1);
  return;
}




void FUN_00101469(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017ae(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(400);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001014c8 to 00101505 has its CatchHandler @ 00101551 */
  FUN_00101866(local_58,&local_60);
  FUN_00101866(local_58,&local_60);
  FUN_00101866(local_58,&local_60);
  FUN_001018a0(local_38,local_58);
                    /* try { // try from 0010150d to 00101511 has its CatchHandler @ 0010153c */
  FUN_0010228e(local_38);
  FUN_001017ce(local_38);
  FUN_001017ce(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101d18(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d2a(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101df4(param_1,1);
  return;
}




undefined8 FUN_00101e1e(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e4c(param_1,param_2);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




undefined8 FUN_00102c32(undefined8 *param_1)

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




void FUN_00101cca(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fd3(param_1,param_2,1);
  return;
}




void FUN_00102365(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  ulong local_348;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010243c(param_1);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    puVar1[local_348] = local_338[local_348];
  }
  FUN_001025e0(*puVar1);
  free(puVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101bfe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101ee8(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101f32(&local_18);
    FUN_00101f54(local_10,uVar2);
    FUN_00101f0e(&local_18);
  }
  return;
}




void FUN_001029f5(void)

{
  return;
}




undefined8 FUN_00101bb2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eca(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101b62(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eca(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101c8e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010176e(undefined8 param_1)

{
  FUN_0010181a(param_1);
  return;
}




void FUN_00101866(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101a1a(param_1);
  FUN_00101a66(param_1,uVar1,param_2);
  return;
}




void FUN_00101718(undefined8 param_1)

{
  FUN_00101738(param_1);
  return;
}




void FUN_00102cca(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001025e0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a21(void)

{
  return;
}




void FUN_00102214(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102276(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_0010276f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010183a(undefined8 param_1)

{
  FUN_0010199c(param_1);
  FUN_0010176e(param_1);
  return;
}




void FUN_0010168d(void)

{
  FUN_0010157b();
  return;
}




void FUN_001017ae(undefined8 param_1)

{
  FUN_0010178e(param_1);
  return;
}




undefined8 FUN_00101d18(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d2a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102006(param_1);
  uVar2 = FUN_00101c8e(param_1);
  FUN_0010202a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101d18(param_2);
  uVar4 = FUN_00101c6c(uVar1);
  FUN_001020a3(uVar2,uVar4,uVar3);
  FUN_001020e0(local_38,0);
  FUN_00102064(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_00101b18(undefined8 param_1)

{
  return param_1;
}




void FUN_00101eca(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102cab(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102a42(void)

{
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




void FUN_00102ce9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101f54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d18(param_2);
  uVar2 = FUN_00101a1a(param_1);
  FUN_00101a66(param_1,uVar2,uVar1);
  return;
}




int FUN_001029d0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101738(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101e88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e76(param_2);
  FUN_00101e4c(param_1,uVar1);
  FUN_00101718(param_1);
  return;
}




void FUN_00102116(long param_1)

{
  FUN_001021f6(param_1 + 0x10);
  return;
}




void FUN_0010214a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102064(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00101fd3(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_00102ae7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ab0,local_18);
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




void FUN_001024be(undefined8 *param_1)

{
  FUN_00101c6c(*param_1);
  return;
}




void FUN_00102102(void)

{
  return;
}




void FUN_0010260b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102a4d(void)

{
  return;
}




void FUN_001018a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101b18(param_2);
  FUN_00101ac7(&local_21,uVar1);
  FUN_00101b2a(param_1,&local_21);
  FUN_0010181a(&local_21);
  uVar1 = FUN_00101bb2(param_2);
  uVar2 = FUN_00101b62(param_2);
                    /* try { // try from 0010192c to 00101930 has its CatchHandler @ 00101933 */
  FUN_00101bfe(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101fc0(void)

{
  return;
}




void FUN_0010202a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010219f(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102505(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




ulong FUN_001027cf(long param_1,ulong param_2,long param_3)

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




void FUN_00102d90(void)

{
  return;
}




bool FUN_00102bb4(pthread_t *param_1)

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




void FUN_0010270e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102a0b(void)

{
  return;
}




void FUN_0010181a(undefined8 param_1)

{
  FUN_0010198c(param_1);
  return;
}




void FUN_001024df(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long * FUN_0010249a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101cfa(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101df4(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102a2c(void)

{
  return;
}




void FUN_001026e3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010196c(undefined8 param_1)

{
  FUN_00101c5c(param_1);
  return;
}




void FUN_00101c6c(long param_1)

{
  FUN_00101fa2(param_1 + 0x10);
  return;
}




undefined8 FUN_0010219f(undefined8 param_1)

{
  return param_1;
}




void FUN_0010243c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101a1a(param_1);
  FUN_0010249a(&local_18);
  FUN_001024be(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001020e0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001025b5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102ab0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010198c(void)

{
  return;
}




void FUN_0010255f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102661(undefined4 param_1)

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




void FUN_00102a37(void)

{
  return;
}




void FUN_00102a9a(void)

{
  return;
}




void FUN_0010273c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101b2a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e76(param_2);
  FUN_00101e88(param_1,uVar1);
  return;
}




undefined8 FUN_00101702(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102138(undefined8 param_1)

{
  return param_1;
}




void FUN_0010157b(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017ae(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(800);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001015da to 00101617 has its CatchHandler @ 00101663 */
  FUN_00101866(local_58,&local_60);
  FUN_00101866(local_58,&local_60);
  FUN_00101866(local_58,&local_60);
  FUN_001018a0(local_38,local_58);
                    /* try { // try from 0010161f to 00101623 has its CatchHandler @ 0010164e */
  FUN_00102365(local_38);
  FUN_001017ce(local_38);
  FUN_001017ce(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_00101f0e(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00101fa2(undefined8 param_1)

{
  FUN_00102138(param_1);
  return;
}




void FUN_00102006(undefined8 param_1)

{
  FUN_00102171(param_1,1);
  return;
}




void FUN_00102a6e(void)

{
  return;
}




void FUN_00102a63(void)

{
  return;
}



