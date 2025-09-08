
void FUN_001020da(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_001018ff(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b20(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 00101934 to 00101988 has its CatchHandler @ 001019d4 */
  local_60 = operator_new__(800);
  FUN_00101bd8(local_58,&local_60);
  FUN_00101bd8(local_58,&local_60);
  FUN_00101bd8(local_58,&local_60);
  FUN_00101c12(local_38,local_58);
                    /* try { // try from 00101990 to 00101994 has its CatchHandler @ 001019bf */
  FUN_00101594(local_38);
  FUN_00101b40(local_38);
  FUN_00101b40(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d0e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001017ae(local_20);
    uVar3 = FUN_00101f92(param_1);
    FUN_00101fa4(uVar3,uVar2);
    FUN_00101fce(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00102455(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e3e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a91(void)

{
  return;
}




undefined8 FUN_001021ce(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_00102b4c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b15,local_18);
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




void FUN_00102288(void)

{
  return;
}




undefined8 FUN_00102c97(undefined8 *param_1)

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




void FUN_001017ae(long param_1)

{
  FUN_001017d0(param_1 + 0x10);
  return;
}




int FUN_00102a35(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001024ac(undefined8 param_1)

{
  FUN_0010251a(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_001017d0(undefined8 param_1)

{
  FUN_001017ee(param_1);
  return;
}




long FUN_001023a8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101ffd(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a73(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101b00(undefined8 param_1)

{
  FUN_00101b60(param_1);
  return;
}




void FUN_00102aff(void)

{
  return;
}




void FUN_00102ad3(void)

{
  return;
}




void FUN_001023de(long param_1)

{
  FUN_001024ac(param_1 + 0x10);
  return;
}




void FUN_001025c4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102df0(void)

{
  return;
}




void FUN_00102132(undefined8 param_1,undefined8 param_2)

{
  FUN_001023ca(param_1,param_2);
  return;
}




void FUN_00102af4(void)

{
  return;
}




void FUN_00101fa4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102288(param_1,param_2);
  return;
}




void FUN_00102a7b(void)

{
  return;
}




undefined8 FUN_00102a26(void)

{
  return 0;
}




void FUN_00101b20(undefined8 param_1)

{
  FUN_00101b00(param_1);
  return;
}




void FUN_00102a4f(void)

{
  return;
}




void FUN_001026c6(undefined4 param_1)

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




void FUN_00102748(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102a65(void)

{
  return;
}




void FUN_001016a0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016fe(param_1);
  FUN_0010174a(&local_18);
  FUN_0010176e(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101fce(undefined8 param_1,undefined8 param_2)

{
  FUN_0010229b(param_1,param_2,1);
  return;
}




void FUN_00101800(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b20(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 00101835 to 00101889 has its CatchHandler @ 001018d5 */
  local_60 = operator_new__(400);
  FUN_00101bd8(local_58,&local_60);
  FUN_00101bd8(local_58,&local_60);
  FUN_00101bd8(local_58,&local_60);
  FUN_00101c12(local_38,local_58);
                    /* try { // try from 00101891 to 00101895 has its CatchHandler @ 001018c0 */
  FUN_00101489(local_38);
  FUN_00101b40(local_38);
  FUN_00101b40(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b60(undefined8 param_1)

{
  FUN_00101cde(param_1);
  FUN_00101a8a(param_1);
  return;
}




void FUN_0010261a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102b0a(void)

{
  return;
}




void FUN_00102400(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013d0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101b40(undefined8 param_1)

{
  FUN_00101bac(param_1);
  return;
}




undefined8 FUN_00101f92(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00102d10(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101e50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010215c(param_2);
  FUN_0010216e(param_1,uVar1);
  return;
}




void FUN_001024ca(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010252c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101cfe(void)

{
  return;
}




void FUN_00102a70(void)

{
  return;
}




void FUN_00101cde(undefined8 param_1)

{
  FUN_00101f82(param_1);
  return;
}




void FUN_00101c12(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101e3e(param_2);
  FUN_00101ded(&local_21,uVar1);
  FUN_00101e50(param_1,&local_21);
  FUN_00101b8c(&local_21);
  uVar1 = FUN_00101ed8(param_2);
  uVar2 = FUN_00101e88(param_2);
                    /* try { // try from 00101c9e to 00101ca2 has its CatchHandler @ 00101ca5 */
  FUN_00101f24(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101ded(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102104(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101790(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101a73(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long * FUN_0010174a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102d4e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102670(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102a9c(void)

{
  return;
}




void FUN_00102427(undefined8 param_1,undefined8 param_2)

{
  FUN_001024ca(param_1,param_2,0);
  return;
}




ulong FUN_00102938(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101a0e(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102544("Calling good()...");
  FUN_001019fe();
  FUN_00102544("Finished good()");
  FUN_00102544("Calling bad()...");
  FUN_00101800();
  FUN_00102544("Finished bad()");
  return 0;
}




void FUN_00101594(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  ulong local_350;
  ulong local_348;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_001016a0(param_1);
  puVar1 = (undefined4 *)*puVar2;
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    *(undefined4 *)(&uStack_338 + local_350) = 0;
    *(undefined4 *)((long)&uStack_338 + local_350 * 8 + 4) = 0;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined8 *)(puVar1 + local_348 * 2) = (&uStack_338)[local_348];
  }
  FUN_0010259c(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001017ee(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101ed8(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021b0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001021ce(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102218(&local_18);
    FUN_0010223a(local_10,uVar2);
    FUN_001021f4(&local_18);
  }
  return;
}




void FUN_00101b8c(undefined8 param_1)

{
  FUN_00101cfe(param_1);
  return;
}




undefined8 FUN_00102010(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001022ce(param_1);
  uVar2 = FUN_00101f92(param_1);
  FUN_001022f2(local_38,uVar2,uVar1);
  uVar3 = FUN_00101ffd(param_2);
  uVar4 = FUN_001017ae(uVar1);
  FUN_0010236b(uVar2,uVar4,uVar3);
  FUN_001023a8(local_38,0);
  FUN_0010232c(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102d2f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102abd(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00102d80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_0010215c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a5a(void)

{
  return;
}




void FUN_0010176e(undefined8 *param_1)

{
  FUN_001017ae(*param_1);
  return;
}




undefined8 FUN_00101ffd(undefined8 param_1)

{
  return param_1;
}




void FUN_001022f2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102455(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_0010236b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ffd(param_3);
  FUN_00102468(param_1,param_2,uVar1);
  return;
}




void FUN_0010223a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101ffd(param_2);
  uVar2 = FUN_001016fe(param_1);
  FUN_00101d8c(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00102c74(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102544(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001022ce(undefined8 param_1)

{
  FUN_00102427(param_1,1);
  return;
}




void FUN_0010269b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102ac8(void)

{
  return;
}




void FUN_00101a8a(undefined8 param_1)

{
  FUN_00101aaa(param_1);
  return;
}




void FUN_001021b0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102218(undefined8 *param_1)

{
  FUN_001023de(*param_1);
  return;
}




void FUN_0010259c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102a17(void)

{
  return 1;
}




void FUN_001027a1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102a86(void)

{
  return;
}




void FUN_001019fe(void)

{
  FUN_001018ff();
  return;
}




void FUN_0010256a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_0010252c(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00101e88(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021b0(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f82(void)

{
  return;
}




void FUN_00102aa7(void)

{
  return;
}




void FUN_00102773(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101aaa(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101ffd(param_3);
  p_Var2 = (_List_node_base *)FUN_00102010(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001020da(param_1,1);
  return;
}




void FUN_001023ca(void)

{
  return;
}




void FUN_00101bd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016fe(param_1);
  FUN_00101d8c(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_0010251a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010229b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102400(param_1,param_2,param_3);
  return;
}




void FUN_001027d4(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102645(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00102c19(pthread_t *param_1)

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




void FUN_00101ae0(undefined8 param_1)

{
  FUN_00101b8c(param_1);
  return;
}




void FUN_001025f0(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102720(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102ab2(void)

{
  return;
}




void FUN_00102b15(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




ulong FUN_00102834(long param_1,ulong param_2,long param_3)

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




void FUN_00101bac(undefined8 param_1)

{
  FUN_00101d0e(param_1);
  FUN_00101ae0(param_1);
  return;
}




undefined8 FUN_001016fe(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101790(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010232c(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010229b(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101489(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  ulong local_350;
  ulong local_348;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_001016a0(param_1);
  puVar1 = (undefined4 *)*puVar2;
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    *(undefined4 *)(&uStack_338 + local_350) = 0;
    *(undefined4 *)((long)&uStack_338 + local_350 * 8 + 4) = 0;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined8 *)(puVar1 + local_348 * 2) = (&uStack_338)[local_348];
  }
  FUN_0010259c(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102104(undefined8 param_1,undefined8 param_2)

{
  FUN_00102132(param_1,param_2);
  return param_1;
}




void FUN_0010216e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010215c(param_2);
  FUN_00102132(param_1,uVar1);
  FUN_00101a8a(param_1);
  return;
}




undefined8 * FUN_001021f4(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102ae9(void)

{
  return;
}




void FUN_00102ade(void)

{
  return;
}



