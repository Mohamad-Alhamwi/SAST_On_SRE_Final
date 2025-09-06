
void FUN_00101f46(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_0010186a(void)

{
  FUN_00101766();
  return;
}




void FUN_00101b7a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101610(local_20);
    uVar3 = FUN_00101dfe(param_1);
    FUN_00101e10(uVar3,uVar2);
    FUN_00101e3a(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_001022c1(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101caa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102b03(undefined8 *param_1)

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




void FUN_001028f2(void)

{
  return;
}




undefined8 FUN_0010203a(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102981(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_001020f4(void)

{
  return;
}




undefined8 FUN_00102ae0(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101650(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102892(void)

{
  return 0;
}




void FUN_00102318(undefined8 param_1)

{
  FUN_00102386(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




long FUN_00102214(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001022d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101e69(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018df(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010198c(undefined8 param_1)

{
  FUN_0010196c(param_1);
  return;
}




void FUN_00102960(void)

{
  return;
}




void FUN_00102934(void)

{
  return;
}




void FUN_0010224a(long param_1)

{
  FUN_00102318(param_1 + 0x10);
  return;
}




void FUN_00102430(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102c60(void)

{
  return;
}




void FUN_00101f9e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102236(param_1,param_2);
  return;
}




void FUN_00102955(void)

{
  return;
}




void FUN_00101e10(undefined8 param_1,undefined8 param_2)

{
  FUN_001020f4(param_1,param_2);
  return;
}




void FUN_001028dc(void)

{
  return;
}




undefined8 FUN_00102883(void)

{
  return 1;
}




void FUN_001019ac(undefined8 param_1)

{
  FUN_00101a18(param_1);
  return;
}




int FUN_001028a1(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102532(undefined4 param_1)

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




void FUN_001025b4(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001028c6(void)

{
  return;
}




long * FUN_001015ac(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101e3a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102107(param_1,param_2,1);
  return;
}




void FUN_00101766(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010198c(local_58);
  local_60 = (void *)0x0;
  local_60 = calloc(1,4);
                    /* try { // try from 001017b7 to 001017f4 has its CatchHandler @ 00101840 */
  FUN_00101a44(local_58,&local_60);
  FUN_00101a44(local_58,&local_60);
  FUN_00101a44(local_58,&local_60);
  FUN_00101a7e(local_38,local_58);
                    /* try { // try from 001017fc to 00101800 has its CatchHandler @ 0010182b */
  FUN_001014b2(local_38);
  FUN_001019ac(local_38);
  FUN_001019ac(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001019f8(undefined8 param_1)

{
  FUN_00101b6a(param_1);
  return;
}




void FUN_00102486(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010296b(void)

{
  return;
}




void FUN_0010226c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001014b2(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101502(param_1);
  __ptr = (undefined4 *)*puVar1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 5;
    FUN_00102408(*__ptr);
    free(__ptr);
  }
  return;
}




void FUN_001019cc(undefined8 param_1)

{
  FUN_00101b4a(param_1);
  FUN_001018f6(param_1);
  return;
}




undefined8 FUN_00101dfe(undefined8 param_1)

{
  return param_1;
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




void FUN_00102b7c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101cbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fc8(param_2);
  FUN_00101fda(param_1,uVar1);
  return;
}




void FUN_00102336(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102398(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101b6a(void)

{
  return;
}




void FUN_001028d1(void)

{
  return;
}




void FUN_00101b4a(undefined8 param_1)

{
  FUN_00101dee(param_1);
  return;
}




void FUN_00101a7e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101caa(param_2);
  FUN_00101c59(&local_21,uVar1);
  FUN_00101cbc(param_1,&local_21);
  FUN_001019f8(&local_21);
  uVar1 = FUN_00101d44(param_2);
  uVar2 = FUN_00101cf4(param_2);
                    /* try { // try from 00101b0a to 00101b0e has its CatchHandler @ 00101b11 */
  FUN_00101d90(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c59(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f70(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101632(undefined8 param_1)

{
  FUN_00101650(param_1);
  return;
}




void FUN_001018f6(undefined8 param_1)

{
  FUN_00101916(param_1);
  return;
}




void FUN_001015f2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102bba(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001024dc(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001028fd(void)

{
  return;
}




void FUN_00102293(undefined8 param_1,undefined8 param_2)

{
  FUN_00102336(param_1,param_2,0);
  return;
}




ulong FUN_001026a0(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001018df(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101560(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001015f2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101662(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010198c(local_58);
  local_60 = (void *)0x0;
  local_60 = calloc(1,4);
                    /* try { // try from 001016b3 to 001016f0 has its CatchHandler @ 0010173c */
  FUN_00101a44(local_58,&local_60);
  FUN_00101a44(local_58,&local_60);
  FUN_00101a44(local_58,&local_60);
  FUN_00101a7e(local_38,local_58);
                    /* try { // try from 001016f8 to 001016fc has its CatchHandler @ 00101727 */
  FUN_00101469(local_38);
  FUN_001019ac(local_38);
  FUN_001019ac(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101d44(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010201c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010203a(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102084(&local_18);
    FUN_001020a6(local_10,uVar2);
    FUN_00102060(&local_18);
  }
  return;
}




void FUN_00101a18(undefined8 param_1)

{
  FUN_00101b7a(param_1);
  FUN_0010194c(param_1);
  return;
}




undefined8 FUN_00101e7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010213a(param_1);
  uVar2 = FUN_00101dfe(param_1);
  FUN_0010215e(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e69(param_2);
  uVar4 = FUN_00101610(uVar1);
  FUN_001021d7(uVar2,uVar4,uVar3);
  FUN_00102214(local_38,0);
  FUN_00102198(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102b9b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010291e(void)

{
  return;
}




void FUN_00101469(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101502(param_1);
  __ptr = (undefined4 *)*puVar1;
  *__ptr = 5;
  FUN_00102408(*__ptr);
  free(__ptr);
  return;
}




void FUN_00102bf0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101fc8(undefined8 param_1)

{
  return param_1;
}




void FUN_001028bb(void)

{
  return;
}




void FUN_00101610(long param_1)

{
  FUN_00101632(param_1 + 0x10);
  return;
}




undefined8 FUN_00101e69(undefined8 param_1)

{
  return param_1;
}




void FUN_0010215e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022c1(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001021d7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e69(param_3);
  FUN_001022d4(param_1,param_2,uVar1);
  return;
}




void FUN_001020a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e69(param_2);
  uVar2 = FUN_00101560(param_1);
  FUN_00101bf8(param_1,uVar2,uVar1);
  return;
}




bool FUN_00102a85(pthread_t *param_1)

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




void FUN_001023b0(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010213a(undefined8 param_1)

{
  FUN_00102293(param_1,1);
  return;
}




void FUN_00102507(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102929(void)

{
  return;
}




void FUN_00101916(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_0010201c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102084(undefined8 *param_1)

{
  FUN_0010224a(*param_1);
  return;
}




void FUN_00102408(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong FUN_001027a4(long param_1,ulong param_2,long param_3)

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




void FUN_0010260d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001028e7(void)

{
  return;
}




undefined8 FUN_0010187a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001023b0("Calling good()...");
  FUN_0010186a();
  FUN_001023b0("Finished good()");
  FUN_001023b0("Calling bad()...");
  FUN_00101662();
  FUN_001023b0("Finished bad()");
  return 0;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_001023d6(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102398(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00101cf4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010201c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101dee(void)

{
  return;
}




void FUN_00102908(void)

{
  return;
}




void FUN_001025df(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010194c(undefined8 param_1)

{
  FUN_001019f8(param_1);
  return;
}




void FUN_00101bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e69(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e7c(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f46(param_1,1);
  return;
}




void FUN_00102236(void)

{
  return;
}




undefined8 FUN_00102386(undefined8 param_1)

{
  return param_1;
}




void FUN_00102107(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010226c(param_1,param_2,param_3);
  return;
}




void FUN_001024b1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001029b8(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102981,local_18);
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




void FUN_0010196c(undefined8 param_1)

{
  FUN_001019cc(param_1);
  return;
}




void FUN_0010245c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010258c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102913(void)

{
  return;
}




void FUN_00102976(void)

{
  return;
}




void FUN_00102640(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101a44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101560(param_1);
  FUN_00101bf8(param_1,uVar1,param_2);
  return;
}




void FUN_001015d0(undefined8 *param_1)

{
  FUN_00101610(*param_1);
  return;
}




void FUN_00102198(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102107(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101502(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101560(param_1);
  FUN_001015ac(&local_18);
  FUN_001015d0(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f70(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f9e(param_1,param_2);
  return param_1;
}




void FUN_00101fda(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fc8(param_2);
  FUN_00101f9e(param_1,uVar1);
  FUN_001018f6(param_1);
  return;
}




undefined8 * FUN_00102060(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010294a(void)

{
  return;
}




void FUN_0010293f(void)

{
  return;
}



