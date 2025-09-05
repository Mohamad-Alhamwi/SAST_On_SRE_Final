
void FUN_001019fc(void)

{
  return;
}




undefined8 FUN_0010170d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024b7("Calling good()...");
  FUN_001016fd();
  FUN_001024b7("Finished good()");
  FUN_001024b7("Calling bad()...");
  FUN_001014a9();
  FUN_001024b7("Finished bad()");
  return 0;
}




undefined8 FUN_00101ee6(undefined8 param_1)

{
  return param_1;
}




void FUN_001017a8(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001024b7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101b9a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ee6(param_2);
  FUN_00101ef8(param_1,uVar1);
  return;
}




void FUN_00102714(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001029ee(void)

{
  return;
}




void FUN_00102c83(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102cf0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ccc(void)

{
  return;
}




ulong FUN_001028ab(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102c0a(undefined8 *param_1)

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




void FUN_00102a88(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001022d4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f3a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101d88(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ef8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ee6(param_2);
  FUN_00101ebc(param_1,uVar1);
  FUN_00101788(param_1);
  return;
}




void FUN_00102693(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001025b8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e64(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102043(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001021ba(param_1,param_2,param_3);
  return;
}




void FUN_001029cd(void)

{
  return;
}




undefined8 FUN_00101a8a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d6a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102639(undefined4 param_1)

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




void FUN_001018aa(undefined8 param_1)

{
  FUN_00101a0c(param_1);
  FUN_001017de(param_1);
  return;
}




long * FUN_00102472(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102a1a(void)

{
  return;
}




void FUN_00102284(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001022e6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




undefined8 FUN_001022e6(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00102be7(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102ca2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102a30(void)

{
  return;
}




void FUN_00102172(void)

{
  return;
}




undefined8 FUN_001021a8(undefined8 param_1)

{
  return param_1;
}




void FUN_00102389(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00102414(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(__dest,local_78);
  FUN_001024b7(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001018d6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101a8a(param_1);
  FUN_00101ad6(param_1,uVar1,param_2);
  return;
}




void FUN_00102a3b(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_0010209a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010220f(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001026bb(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101e8e(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ebc(param_1,param_2);
  return param_1;
}




void FUN_0010188a(undefined8 param_1)

{
  FUN_001019fc(param_1);
  return;
}




void FUN_00102a72(void)

{
  return;
}




undefined8 FUN_0010298a(void)

{
  return 1;
}




void FUN_00102a67(void)

{
  return;
}




void FUN_001017de(undefined8 param_1)

{
  FUN_0010188a(param_1);
  return;
}




undefined8 FUN_00101f58(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001016fd(void)

{
  FUN_001015d5();
  return;
}




void FUN_00102414(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101a8a(param_1);
  FUN_00102472(&local_18);
  FUN_00102496(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001015d5(void)

{
  long in_FS_OFFSET;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010181e(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 0010160a to 00101687 has its CatchHandler @ 001016d3 */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = local_60;
  FUN_001018d6(local_58,&local_68);
  FUN_001018d6(local_58,&local_68);
  FUN_001018d6(local_58,&local_68);
  FUN_00101910(local_38,local_58);
                    /* try { // try from 0010168f to 00101693 has its CatchHandler @ 001016be */
  FUN_00102389(local_38);
  FUN_0010183e(local_38);
  FUN_0010183e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001014a9(void)

{
  long in_FS_OFFSET;
  long local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010181e(local_58);
  local_68 = 0;
                    /* try { // try from 001014de to 0010155f has its CatchHandler @ 001015ab */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = (long)local_60 + -8;
  FUN_001018d6(local_58,&local_68);
  FUN_001018d6(local_58,&local_68);
  FUN_001018d6(local_58,&local_68);
  FUN_00101910(local_38,local_58);
                    /* try { // try from 00101567 to 0010156b has its CatchHandler @ 00101596 */
  FUN_001022fe(local_38);
  FUN_0010183e(local_38);
  FUN_0010183e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101788(undefined8 param_1)

{
  FUN_001017a8(param_1);
  return;
}




void FUN_00102a7d(void)

{
  return;
}




int FUN_001029a8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102113(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d88(param_3);
  FUN_00102222(param_1,param_2,uVar1);
  return;
}




void FUN_001024dd(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101ebc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102172(param_1,param_2);
  return;
}




void FUN_00102222(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101d88(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101772(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00102abf(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a88,local_18);
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




void FUN_0010181e(undefined8 param_1)

{
  FUN_001017fe(param_1);
  return;
}




void FUN_0010183e(undefined8 param_1)

{
  FUN_001018aa(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_001019dc(undefined8 param_1)

{
  FUN_00101ccc(param_1);
  return;
}




undefined8 FUN_00102999(void)

{
  return 0;
}




void FUN_00102563(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001029c2(void)

{
  return;
}




void FUN_00101ad6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101d88(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d9a(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101e64(param_1,1);
  return;
}




void FUN_001022fe(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00102414(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(__dest,local_78);
  FUN_001024b7(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a25(void)

{
  return;
}




void FUN_00101910(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101b88(param_2);
  FUN_00101b37(&local_21,uVar1);
  FUN_00101b9a(param_1,&local_21);
  FUN_0010188a(&local_21);
  uVar1 = FUN_00101c22(param_2);
  uVar2 = FUN_00101bd2(param_2);
                    /* try { // try from 0010199c to 001019a0 has its CatchHandler @ 001019a3 */
  FUN_00101c6e(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d10(undefined8 param_1,undefined8 param_2)

{
  FUN_00102030(param_1,param_2);
  return;
}




void FUN_00101d6a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101c6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101f58(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101fa2(&local_18);
    FUN_00101fc4(local_10,uVar2);
    FUN_00101f7e(&local_18);
  }
  return;
}




ulong FUN_001027a7(long param_1,ulong param_2,long param_3)

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




void FUN_00101fc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d88(param_2);
  uVar2 = FUN_00101a8a(param_1);
  FUN_00101ad6(param_1,uVar2,uVar1);
  return;
}




void FUN_00102a04(void)

{
  return;
}




void FUN_00102d60(void)

{
  return;
}




undefined8 FUN_00101cfe(undefined8 param_1)

{
  return param_1;
}




long FUN_00102150(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_0010258d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101b88(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c22(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f3a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102030(void)

{
  return;
}




void FUN_00102266(undefined8 param_1)

{
  FUN_001022d4(param_1);
  return;
}




void FUN_001029e3(void)

{
  return;
}




void FUN_00102a46(void)

{
  return;
}




void FUN_00102a5c(void)

{
  return;
}




void FUN_001029d8(void)

{
  return;
}




void FUN_001029f9(void)

{
  return;
}




void FUN_001021e1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102284(param_1,param_2,0);
  return;
}




void FUN_00102496(undefined8 *param_1)

{
  FUN_00101cdc(*param_1);
  return;
}




bool FUN_00102b8c(pthread_t *param_1)

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




void FUN_00102012(undefined8 param_1)

{
  FUN_001021a8(param_1);
  return;
}




void FUN_00101fa2(undefined8 *param_1)

{
  FUN_00102186(*param_1);
  return;
}




void FUN_001017fe(undefined8 param_1)

{
  FUN_0010185e(param_1);
  return;
}




void FUN_0010185e(undefined8 param_1)

{
  FUN_001019dc(param_1);
  FUN_00101788(param_1);
  return;
}




void FUN_0010250f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001021ba(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102a51(void)

{
  return;
}




undefined8 FUN_00101772(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101d9a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102076(param_1);
  uVar2 = FUN_00101cfe(param_1);
  FUN_0010209a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101d88(param_2);
  uVar4 = FUN_00101cdc(uVar1);
  FUN_00102113(uVar2,uVar4,uVar3);
  FUN_00102150(local_38,0);
  FUN_001020d4(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 * FUN_00101f7e(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00101cdc(long param_1)

{
  FUN_00102012(param_1 + 0x10);
  return;
}




void FUN_001020d4(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102043(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102747(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102076(undefined8 param_1)

{
  FUN_001021e1(param_1,1);
  return;
}




void FUN_00102186(long param_1)

{
  FUN_00102266(param_1 + 0x10);
  return;
}




void FUN_00102537(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001026e6(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102cc1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_0010220f(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013f0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101d3a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102043(param_1,param_2,1);
  return;
}




void FUN_00101a0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101cdc(local_20);
    uVar3 = FUN_00101cfe(param_1);
    FUN_00101d10(uVar3,uVar2);
    FUN_00101d3a(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00101b37(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e8e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101bd2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f3a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010260e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001025e3(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102a0f(void)

{
  return;
}



