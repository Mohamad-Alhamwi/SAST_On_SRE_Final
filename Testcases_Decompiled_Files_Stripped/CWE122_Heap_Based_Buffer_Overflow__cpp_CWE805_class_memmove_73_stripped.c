
undefined8 FUN_00101bcc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ee4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




void FUN_00101808(undefined8 param_1)

{
  FUN_00101986(param_1);
  FUN_00101732(param_1);
  return;
}




void FUN_00101fda(void)

{
  return;
}




void FUN_00101880(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101a34(param_1);
  FUN_00101a80(param_1,uVar1,param_2);
  return;
}




void FUN_00102660(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ce4(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fed(param_1,param_2,1);
  return;
}




void FUN_00102a1f(void)

{
  return;
}




void FUN_00102a98(void)

{
  return;
}




void FUN_00101e0e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102a40(void)

{
  return;
}




void FUN_00102d40(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010252f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102020(undefined8 param_1)

{
  FUN_0010218b(param_1,1);
  return;
}




undefined8 FUN_00101f02(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00101fed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102164(param_1,param_2,param_3);
  return;
}




void FUN_001016a7(void)

{
  FUN_001015a8();
  return;
}




undefined8 FUN_001029eb(void)

{
  return 0;
}




void FUN_00102799(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101f4c(undefined8 *param_1)

{
  FUN_00102130(*param_1);
  return;
}




undefined8 FUN_00102152(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a77(void)

{
  return;
}




void FUN_00101c76(void)

{
  return;
}




undefined8 FUN_001029dc(void)

{
  return 1;
}




undefined8 FUN_00101ae1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e38(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010260a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102ac4(void)

{
  return;
}




void FUN_00102509(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001016b7(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102509("Calling good()...");
  FUN_001016a7();
  FUN_00102509("Finished good()");
  FUN_00102509("Calling bad()...");
  FUN_001014a9();
  FUN_00102509("Finished bad()");
  return 0;
}




void FUN_00102561(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102ada(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010222e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102290(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00102290(void)

{
  return 0x555555555555555;
}




void FUN_001025b5(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101b32(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102b11(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ada,local_18);
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




void FUN_00101732(undefined8 param_1)

{
  FUN_00101752(param_1);
  return;
}




void FUN_0010218b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010222e(param_1,param_2,0);
  return;
}




int FUN_001029fa(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101f6e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d32(param_2);
  uVar2 = FUN_00101a34(param_1);
  FUN_00101a80(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_0010171c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101a80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101d32(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d44(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101e0e(param_1,1);
  return;
}




void FUN_00102cf4(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102a4b(void)

{
  return;
}




void FUN_00102cd5(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001018ba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101b32(param_2);
  FUN_00101ae1(&local_21,uVar1);
  FUN_00101b44(param_1,&local_21);
  FUN_00101834(&local_21);
  uVar1 = FUN_00101bcc(param_2);
  uVar2 = FUN_00101b7c(param_2);
                    /* try { // try from 00101946 to 0010194a has its CatchHandler @ 0010194d */
  FUN_00101c18(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102044(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021b9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001017e8(undefined8 param_1)

{
  FUN_00101854(param_1);
  return;
}




void FUN_001025df(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001017c8(undefined8 param_1)

{
  FUN_001017a8(param_1);
  return;
}




void FUN_001017a8(undefined8 param_1)

{
  FUN_00101808(param_1);
  return;
}




void FUN_00101854(undefined8 param_1)

{
  FUN_001019b6(param_1);
  FUN_00101788(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_00102d13(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102a61(void)

{
  return;
}




void FUN_001021cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101d32(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010171c(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010268b(undefined4 param_1)

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




void FUN_00101fbc(undefined8 param_1)

{
  FUN_00102152(param_1);
  return;
}




long * FUN_001024c4(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00102db0(void)

{
  return;
}




void FUN_001019a6(void)

{
  return;
}




void FUN_001019b6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101c86(local_20);
    uVar3 = FUN_00101ca8(param_1);
    FUN_00101cba(uVar3,uVar2);
    FUN_00101ce4(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101752(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101b7c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ee4(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a56(void)

{
  return;
}




void FUN_00102738(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102a6c(void)

{
  return;
}




void FUN_00101c86(long param_1)

{
  FUN_00101fbc(param_1 + 0x10);
  return;
}




void FUN_00102589(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102acf(void)

{
  return;
}




void FUN_00101b44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e90(param_2);
  FUN_00101ea2(param_1,uVar1);
  return;
}




undefined8 FUN_00101e90(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ee4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101d44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102020(param_1);
  uVar2 = FUN_00101ca8(param_1);
  FUN_00102044(local_38,uVar2,uVar1);
  uVar3 = FUN_00101d32(param_2);
  uVar4 = FUN_00101c86(uVar1);
  FUN_001020bd(uVar2,uVar4,uVar3);
  FUN_001020fa(local_38,0);
  FUN_0010207e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102a35(void)

{
  return;
}




long FUN_001020fa(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102aae(void)

{
  return;
}




void FUN_00101e66(undefined8 param_1,undefined8 param_2)

{
  FUN_0010211c(param_1,param_2);
  return;
}




void FUN_00102210(undefined8 param_1)

{
  FUN_0010227e(param_1);
  return;
}




void FUN_00102766(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
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




void FUN_00101cba(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fda(param_1,param_2);
  return;
}




undefined8 FUN_00101d32(undefined8 param_1)

{
  return param_1;
}




void FUN_00102130(long param_1)

{
  FUN_00102210(param_1 + 0x10);
  return;
}




void FUN_001024e8(undefined8 *param_1)

{
  FUN_00101c86(*param_1);
  return;
}




void FUN_00102a8d(void)

{
  return;
}




bool FUN_00102bde(pthread_t *param_1)

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




undefined8 FUN_00102c5c(undefined8 *param_1)

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




void FUN_00102a82(void)

{
  return;
}




void FUN_00102aa3(void)

{
  return;
}




void FUN_00102387(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00102466(param_1);
  __dest = (undefined4 *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memmove(__dest,local_338,800);
  FUN_00102561(*__dest);
  if (__dest != (undefined4 *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102635(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010211c(void)

{
  return;
}




void FUN_001020bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d32(param_3);
  FUN_001021cc(param_1,param_2,uVar1);
  return;
}




void FUN_00101986(undefined8 param_1)

{
  FUN_00101c76(param_1);
  return;
}




undefined8 FUN_00101a34(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d14(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001026e5(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001022a8(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00102466(param_1);
  __dest = (undefined4 *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memmove(__dest,local_338,800);
  FUN_00102561(*__dest);
  if (__dest != (undefined4 *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001014a9(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017c8(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001014de to 00101532 has its CatchHandler @ 0010157e */
  local_60 = operator_new__(400);
  FUN_00101880(local_58,&local_60);
  FUN_00101880(local_58,&local_60);
  FUN_00101880(local_58,&local_60);
  FUN_001018ba(local_38,local_58);
                    /* try { // try from 0010153a to 0010153e has its CatchHandler @ 00101569 */
  FUN_001022a8(local_38);
  FUN_001017e8(local_38);
  FUN_001017e8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c39(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101834(undefined8 param_1)

{
  FUN_001019a6(param_1);
  return;
}




undefined8 * FUN_00101f28(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010207e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00101fed(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_00101e38(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e66(param_1,param_2);
  return param_1;
}




undefined8 FUN_001021b9(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a2a(void)

{
  return;
}




void FUN_001015a8(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017c8(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001015dd to 00101631 has its CatchHandler @ 0010167d */
  local_60 = operator_new__(800);
  FUN_00101880(local_58,&local_60);
  FUN_00101880(local_58,&local_60);
  FUN_00101880(local_58,&local_60);
  FUN_001018ba(local_38,local_58);
                    /* try { // try from 00101639 to 0010163d has its CatchHandler @ 00101668 */
  FUN_00102387(local_38);
  FUN_001017e8(local_38);
  FUN_001017e8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102164(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010227e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010270d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102a14(void)

{
  return;
}




void FUN_00102466(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101a34(param_1);
  FUN_001024c4(&local_18);
  FUN_001024e8(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101788(undefined8 param_1)

{
  FUN_00101834(param_1);
  return;
}




void FUN_00101ea2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e90(param_2);
  FUN_00101e66(param_1,uVar1);
  FUN_00101732(param_1);
  return;
}




void FUN_00101c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101f02(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101f4c(&local_18);
    FUN_00101f6e(local_10,uVar2);
    FUN_00101f28(&local_18);
  }
  return;
}




undefined8 FUN_00101ca8(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d14(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




ulong FUN_001028fd(long param_1,ulong param_2,long param_3)

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




ulong FUN_001027f9(long param_1,ulong param_2,long param_3)

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




void FUN_00102ab9(void)

{
  return;
}



