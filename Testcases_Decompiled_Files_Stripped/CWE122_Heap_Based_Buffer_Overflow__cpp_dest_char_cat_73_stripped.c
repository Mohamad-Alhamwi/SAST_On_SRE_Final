
void FUN_00101aae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101d60(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d72(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101e3c(param_1,1);
  return;
}




void FUN_00101780(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101f30(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001017f6(undefined8 param_1)

{
  FUN_001017d6(param_1);
  return;
}




void FUN_00102535(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c46(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101f30(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101f7a(&local_18);
    FUN_00101f9c(local_10,uVar2);
    FUN_00101f56(&local_18);
  }
  return;
}




ulong FUN_001028a9(long param_1,ulong param_2,long param_3)

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




void FUN_00102a0d(void)

{
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




void FUN_00101ce8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102008(param_1,param_2);
  return;
}




int FUN_001029a6(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102cbf(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102be5(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102374(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00102412(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(__dest,local_78);
  FUN_001024b5(__dest);
  if (__dest != (char *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f7a(undefined8 *param_1)

{
  FUN_0010215e(*param_1);
  return;
}




undefined8 FUN_00101e66(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e94(param_1,param_2);
  return param_1;
}




undefined8 * FUN_00101f56(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00102712(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102637(undefined4 param_1)

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




undefined8 FUN_00101ebe(undefined8 param_1)

{
  return param_1;
}




void FUN_001020ac(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010201b(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001029ec(void)

{
  return;
}




undefined8 FUN_00101b60(undefined8 param_1)

{
  return param_1;
}




void FUN_001026e4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001019b4(undefined8 param_1)

{
  FUN_00101ca4(param_1);
  return;
}




void FUN_001024db(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102a39(void)

{
  return;
}




void FUN_001022d6(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00102412(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(__dest,local_78);
  FUN_001024b5(__dest);
  if (__dest != (char *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00102412(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101a62(param_1);
  FUN_00102470(&local_18);
  FUN_00102494(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ca0(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102d60(void)

{
  return;
}




void FUN_00102a4f(void)

{
  return;
}




void FUN_00102192(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001021e7(undefined8 param_1)

{
  return param_1;
}




void FUN_00102494(undefined8 *param_1)

{
  FUN_00101cb4(*param_1);
  return;
}




void FUN_001019d4(void)

{
  return;
}




void FUN_00102a5a(void)

{
  return;
}




void FUN_001014c9(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017f6(local_58);
  local_60 = (undefined *)0x0;
                    /* try { // try from 001014fe to 00101559 has its CatchHandler @ 001015a5 */
  local_60 = (undefined *)operator_new__(0x32);
  *local_60 = 0;
  FUN_001018ae(local_58,&local_60);
  FUN_001018ae(local_58,&local_60);
  FUN_001018ae(local_58,&local_60);
  FUN_001018e8(local_38,local_58);
                    /* try { // try from 00101561 to 00101565 has its CatchHandler @ 00101590 */
  FUN_001022d6(local_38);
  FUN_00101816(local_38);
  FUN_00101816(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102128(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102745(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101ed0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ebe(param_2);
  FUN_00101e94(param_1,uVar1);
  FUN_00101760(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101410();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_001018e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101b60(param_2);
  FUN_00101b0f(&local_21,uVar1);
  FUN_00101b72(param_1,&local_21);
  FUN_00101862(&local_21);
  uVar1 = FUN_00101bfa(param_2);
  uVar2 = FUN_00101baa(param_2);
                    /* try { // try from 00101974 to 00101978 has its CatchHandler @ 0010197b */
  FUN_00101c46(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102abd(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a86,local_18);
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




void FUN_001029c0(void)

{
  return;
}




void FUN_00102a86(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101816(undefined8 param_1)

{
  FUN_00101882(param_1);
  return;
}




void FUN_00101f9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d60(param_2);
  uVar2 = FUN_00101a62(param_1);
  FUN_00101aae(param_1,uVar2,uVar1);
  return;
}




void FUN_00101760(undefined8 param_1)

{
  FUN_00101780(param_1);
  return;
}




void FUN_001024b5(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010174a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001016e5(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024b5("Calling good()...");
  FUN_001016d5();
  FUN_001024b5("Finished good()");
  FUN_001024b5("Calling bad()...");
  FUN_001014c9();
  FUN_001024b5("Finished bad()");
  return 0;
}




void FUN_001017d6(undefined8 param_1)

{
  FUN_00101836(param_1);
  return;
}




bool FUN_00102b8a(pthread_t *param_1)

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




void FUN_001029d6(void)

{
  return;
}




void FUN_0010215e(long param_1)

{
  FUN_0010223e(param_1 + 0x10);
  return;
}




void FUN_00102561(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101f12(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001022ac(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c08(undefined8 *param_1)

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




void FUN_00101862(undefined8 param_1)

{
  FUN_001019d4(param_1);
  return;
}




void FUN_00101882(undefined8 param_1)

{
  FUN_001019e4(param_1);
  FUN_001017b6(param_1);
  return;
}




void FUN_001015cf(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017f6(local_58);
  local_60 = (undefined *)0x0;
                    /* try { // try from 00101604 to 0010165f has its CatchHandler @ 001016ab */
  local_60 = (undefined *)operator_new__(100);
  *local_60 = 0;
  FUN_001018ae(local_58,&local_60);
  FUN_001018ae(local_58,&local_60);
  FUN_001018ae(local_58,&local_60);
  FUN_001018e8(local_38,local_58);
                    /* try { // try from 00101667 to 0010166b has its CatchHandler @ 00101696 */
  FUN_00102374(local_38);
  FUN_00101816(local_38);
  FUN_00101816(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101a62(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d42(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001029cb(void)

{
  return;
}




void FUN_001025e1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001029e1(void)

{
  return;
}




void FUN_00101b72(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ebe(param_2);
  FUN_00101ed0(param_1,uVar1);
  return;
}




long * FUN_00102470(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102a44(void)

{
  return;
}




void FUN_001019e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101cb4(local_20);
    uVar3 = FUN_00101cd6(param_1);
    FUN_00101ce8(uVar3,uVar2);
    FUN_00101d12(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00101d60(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e3c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00101cd6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102997(void)

{
  return 0;
}




void FUN_0010201b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102192(param_1,param_2,param_3);
  return;
}




void FUN_00102a23(void)

{
  return;
}




void FUN_00101d42(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102180(undefined8 param_1)

{
  return param_1;
}




void FUN_0010260c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101bfa(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f12(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101cb4(long param_1)

{
  FUN_00101fea(param_1 + 0x10);
  return;
}




void FUN_00102072(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021e7(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_001022be(void)

{
  return 0x555555555555555;
}




void FUN_00102a02(void)

{
  return;
}




void FUN_00102a65(void)

{
  return;
}




void FUN_00102a7b(void)

{
  return;
}




void FUN_001029f7(void)

{
  return;
}




void FUN_00102a18(void)

{
  return;
}




void FUN_0010223e(undefined8 param_1)

{
  FUN_001022ac(param_1);
  return;
}




void FUN_0010250d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102c81(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010204e(undefined8 param_1)

{
  FUN_001021b9(param_1,1);
  return;
}




void FUN_00102008(void)

{
  return;
}




void FUN_00101836(undefined8 param_1)

{
  FUN_001019b4(param_1);
  FUN_00101760(param_1);
  return;
}




void FUN_001018ae(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101a62(param_1);
  FUN_00101aae(param_1,uVar1,param_2);
  return;
}




void FUN_0010258b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001021fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101d60(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010174a(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ee8)();
  return;
}




void FUN_00102a70(void)

{
  return;
}




void FUN_001017b6(undefined8 param_1)

{
  FUN_00101862(param_1);
  return;
}




void FUN_00101e94(undefined8 param_1,undefined8 param_2)

{
  FUN_0010214a(param_1,param_2);
  return;
}




void FUN_00101fea(undefined8 param_1)

{
  FUN_00102180(param_1);
  return;
}




void FUN_00101d12(undefined8 param_1,undefined8 param_2)

{
  FUN_0010201b(param_1,param_2,1);
  return;
}




void FUN_0010214a(void)

{
  return;
}




undefined8 FUN_00102988(void)

{
  return 1;
}




void FUN_001020eb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d60(param_3);
  FUN_001021fa(param_1,param_2,uVar1);
  return;
}




void FUN_001021b9(undefined8 param_1,undefined8 param_2)

{
  FUN_0010225c(param_1,param_2,0);
  return;
}




void FUN_001025b6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_001027a5(long param_1,ulong param_2,long param_3)

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




void FUN_0010225c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001022be(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001016d5(void)

{
  FUN_001015cf();
  return;
}




undefined8 FUN_00101d72(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010204e(param_1);
  uVar2 = FUN_00101cd6(param_1);
  FUN_00102072(local_38,uVar2,uVar1);
  uVar3 = FUN_00101d60(param_2);
  uVar4 = FUN_00101cb4(uVar1);
  FUN_001020eb(uVar2,uVar4,uVar3);
  FUN_00102128(local_38,0);
  FUN_001020ac(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_00101b0f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e66(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101baa(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f12(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ca4(void)

{
  return;
}




void FUN_001026b9(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102691(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102a2e(void)

{
  return;
}



