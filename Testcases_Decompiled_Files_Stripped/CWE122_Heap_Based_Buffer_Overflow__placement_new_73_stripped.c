
undefined8 FUN_00101ecc(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101599(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101b6e(undefined8 param_1)

{
  FUN_00101c1a(param_1);
  return;
}




void FUN_00102316(void)

{
  return;
}




void FUN_00101bce(undefined8 param_1)

{
  FUN_00101c3a(param_1);
  return;
}




void FUN_00102862(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00102020(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b2a(void)

{
  return;
}




void FUN_00102ba3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010209e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010235c(param_1);
  uVar2 = FUN_00102020(param_1);
  FUN_00102380(local_38,uVar2,uVar1);
  uVar3 = FUN_0010208b(param_2);
  uVar4 = FUN_001016be(uVar1);
  FUN_001023f9(uVar2,uVar4,uVar3);
  FUN_00102436(local_38,0);
  FUN_001023ba(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102b4b(void)

{
  return;
}




void FUN_00101469(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined8 *)FUN_001015b0(param_1);
  __ptr = (void *)*puVar1;
  puVar2 = (undefined4 *)FUN_00101599(8,__ptr);
  *puVar2 = 5;
  puVar2[1] = 10;
  FUN_0010262a(*puVar2);
  free(__ptr);
  return;
}




void FUN_001026fe(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010235c(undefined8 param_1)

{
  FUN_001024b5(param_1,1);
  return;
}




void FUN_0010223e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102329(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010248e(param_1,param_2,param_3);
  return;
}




void FUN_001016e0(undefined8 param_1)

{
  FUN_001016fe(param_1);
  return;
}




void FUN_00102b09(void)

{
  return;
}




void FUN_00102add(void)

{
  return;
}




undefined8 * FUN_00102282(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010248e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102b82(void)

{
  return;
}




undefined8 FUN_00101f16(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010223e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102afe(void)

{
  return;
}




void FUN_00101d8c(void)

{
  return;
}




void FUN_00102801(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102d25(undefined8 *param_1)

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




void FUN_001026d3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001016fe(undefined8 param_1)

{
  return param_1;
}




void FUN_00102729(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102dbd(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001025a8(undefined8 param_1)

{
  return param_1;
}




void FUN_001025d2(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001027ae(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00101d9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016be(local_20);
    uVar3 = FUN_00102020(param_1);
    FUN_00102032(uVar3,uVar2);
    FUN_0010205c(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_0010153b(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined8 *)FUN_001015b0(param_1);
  __ptr = (void *)*puVar1;
  puVar2 = (undefined4 *)FUN_00101599(4,__ptr);
  *puVar2 = 5;
  FUN_0010262a(*puVar2);
  free(__ptr);
  return;
}




void FUN_00102ddc(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010183f(void)

{
  long in_FS_OFFSET;
  void *local_70;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101bae(local_58);
  local_68 = malloc(4);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_70 = malloc(8);
  local_60 = local_70;
  if (local_70 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001018bb to 001018f8 has its CatchHandler @ 00101944 */
  FUN_00101c66(local_58,&local_70);
  FUN_00101c66(local_58,&local_70);
  FUN_00101c66(local_58,&local_70);
  FUN_00101ca0(local_38,local_58);
                    /* try { // try from 00101900 to 00101904 has its CatchHandler @ 0010192f */
  FUN_001014d2(local_38);
  FUN_00101bce(local_38);
  FUN_00101bce(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001024e3(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b14(void)

{
  return;
}




void FUN_001022a6(undefined8 *param_1)

{
  FUN_0010246c(*param_1);
  return;
}




void FUN_00101710(void)

{
  long in_FS_OFFSET;
  void *local_70;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101bae(local_58);
  local_68 = malloc(4);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = malloc(8);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_70 = local_68;
                    /* try { // try from 0010178c to 001017c9 has its CatchHandler @ 00101815 */
  FUN_00101c66(local_58,&local_70);
  FUN_00101c66(local_58,&local_70);
  FUN_00101c66(local_58,&local_70);
  FUN_00101ca0(local_38,local_58);
                    /* try { // try from 001017d1 to 001017d5 has its CatchHandler @ 00101800 */
  FUN_00101469(local_38);
  FUN_00101bce(local_38);
  FUN_00101bce(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d6c(undefined8 param_1)

{
  FUN_00102010(param_1);
  return;
}




void FUN_00102b56(void)

{
  return;
}




void FUN_00101bee(undefined8 param_1)

{
  FUN_00101d6c(param_1);
  FUN_00101b18(param_1);
  return;
}




void FUN_00102380(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024e3(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101b38(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001027d6(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101b18(undefined8 param_1)

{
  FUN_00101b38(param_1);
  return;
}




undefined8 FUN_00101ab2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001025d2("Calling good()...");
  FUN_00101a9d();
  FUN_001025d2("Finished good()");
  FUN_001025d2("Calling bad()...");
  FUN_00101710();
  FUN_001025d2("Finished bad()");
  return 0;
}




void FUN_00101bae(undefined8 param_1)

{
  FUN_00101b8e(param_1);
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




long * FUN_0010165a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_00102b6c(void)

{
  return;
}




void FUN_0010253a(undefined8 param_1)

{
  FUN_001025a8(param_1);
  return;
}




ulong FUN_001028c2(long param_1,ulong param_2,long param_3)

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




void FUN_001022c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010208b(param_2);
  uVar2 = FUN_0010160e(param_1);
  FUN_00101e1a(param_1,uVar2,uVar1);
  return;
}




void FUN_0010267e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_0010160e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016a0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001014d2(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined8 *)FUN_001015b0(param_1);
  __ptr = (void *)*puVar1;
  puVar2 = (undefined4 *)FUN_00101599(8,__ptr);
  *puVar2 = 5;
  puVar2[1] = 10;
  FUN_0010262a(*puVar2);
  free(__ptr);
  return;
}




void FUN_00101c3a(undefined8 param_1)

{
  FUN_00101d9c(param_1);
  FUN_00101b6e(param_1);
  return;
}




void FUN_00101c66(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010160e(param_1);
  FUN_00101e1a(param_1,uVar1,param_2);
  return;
}




void FUN_0010196e(void)

{
  long in_FS_OFFSET;
  void *local_70;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101bae(local_58);
  local_68 = malloc(4);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = malloc(8);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_70 = local_68;
                    /* try { // try from 001019ea to 00101a27 has its CatchHandler @ 00101a73 */
  FUN_00101c66(local_58,&local_70);
  FUN_00101c66(local_58,&local_70);
  FUN_00101c66(local_58,&local_70);
  FUN_00101ca0(local_38,local_58);
                    /* try { // try from 00101a2f to 00101a33 has its CatchHandler @ 00101a5e */
  FUN_0010153b(local_38);
  FUN_00101bce(local_38);
  FUN_00101bce(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e7b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102192(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102b61(void)

{
  return;
}




undefined8 FUN_00102ab4(void)

{
  return 0;
}




void FUN_00102b77(void)

{
  return;
}




undefined8 FUN_00101f66(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010223e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102754(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00101e1a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_0010208b(param_3);
  p_Var2 = (_List_node_base *)FUN_0010209e(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102168(param_1,1);
  return;
}




void FUN_001021c0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102458(param_1,param_2);
  return;
}




void FUN_00102d9e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001021fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021ea(param_2);
  FUN_001021c0(param_1,uVar1);
  FUN_00101b18(param_1);
  return;
}




undefined8 FUN_0010208b(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b40(void)

{
  return;
}




long FUN_00102436(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




bool FUN_00102ca7(pthread_t *param_1)

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




undefined8 FUN_00102192(undefined8 param_1,undefined8 param_2)

{
  FUN_001021c0(param_1,param_2);
  return param_1;
}




void FUN_00102558(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001025ba(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




int FUN_00102ac3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010167e(undefined8 *param_1)

{
  FUN_001016be(*param_1);
  return;
}




void FUN_00102010(void)

{
  return;
}




void FUN_0010205c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102329(param_1,param_2,1);
  return;
}




void FUN_0010246c(long param_1)

{
  FUN_0010253a(param_1 + 0x10);
  return;
}




void FUN_001026a8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102b98(void)

{
  return;
}




void FUN_00102e10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102b8d(void)

{
  return;
}




undefined8 FUN_00102bda(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ba3,local_18);
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




void FUN_0010262a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010282f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001015b0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010160e(param_1);
  FUN_0010165a(&local_18);
  FUN_0010167e(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102458(void)

{
  return;
}




void FUN_001023f9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010208b(param_3);
  FUN_001024f6(param_1,param_2,uVar1);
  return;
}




void FUN_00101c1a(undefined8 param_1)

{
  FUN_00101d8c(param_1);
  return;
}




void FUN_00101ca0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101ecc(param_2);
  FUN_00101e7b(&local_21,uVar1);
  FUN_00101ede(param_1,&local_21);
  FUN_00101c1a(&local_21);
  uVar1 = FUN_00101f66(param_2);
  uVar2 = FUN_00101f16(param_2);
                    /* try { // try from 00101d2c to 00101d30 has its CatchHandler @ 00101d33 */
  FUN_00101fb2(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001029c6(long param_1,ulong param_2,long param_3)

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




void FUN_001025f8(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001016a0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102e80(void)

{
  return;
}




void FUN_00101b8e(undefined8 param_1)

{
  FUN_00101bee(param_1);
  return;
}




undefined8 FUN_0010225c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001023ba(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102329(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102168(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_001024f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0010208b(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101599(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102b35(void)

{
  return;
}




void FUN_001016be(long param_1)

{
  FUN_001016e0(param_1 + 0x10);
  return;
}




void FUN_001024b5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102558(param_1,param_2,0);
  return;
}




undefined8 FUN_001025ba(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00102aa5(void)

{
  return 1;
}




void FUN_00102b1f(void)

{
  return;
}




void FUN_00102652(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a9d(void)

{
  FUN_0010183f();
  FUN_0010196e();
  return;
}




undefined8 FUN_001021ea(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ede(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021ea(param_2);
  FUN_001021fc(param_1,uVar1);
  return;
}




void FUN_00101fb2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010225c(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001022a6(&local_18);
    FUN_001022c8(local_10,uVar2);
    FUN_00102282(&local_18);
  }
  return;
}




void FUN_00102032(undefined8 param_1,undefined8 param_2)

{
  FUN_00102316(param_1,param_2);
  return;
}




void FUN_00102af3(void)

{
  return;
}




void FUN_00102ae8(void)

{
  return;
}




undefined8 FUN_00102d02(void *param_1)

{
  free(param_1);
  return 1;
}



