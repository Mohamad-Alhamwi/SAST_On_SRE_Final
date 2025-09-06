
void FUN_00101cde(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101671(void)

{
  FUN_0010156d();
  return;
}




void FUN_00101980(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101c50(local_20);
    uVar3 = FUN_00101c72(param_1);
    FUN_00101c84(uVar3,uVar2);
    FUN_00101cae(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_001020e6(void)

{
  return;
}




undefined8 FUN_00101aab(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e02(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




ulong FUN_001026b3(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101e5a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102926(void)

{
  return;
}




undefined8 FUN_001029cb(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102994,local_18);
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




undefined8 * FUN_00101ef2(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102947(void)

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




void FUN_0010251a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010211c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101fea(undefined8 param_1)

{
  FUN_00102155(param_1,1);
  return;
}




void FUN_001020fa(long param_1)

{
  FUN_001021da(param_1 + 0x10);
  return;
}




void FUN_00101792(undefined8 param_1)

{
  FUN_00101772(param_1);
  return;
}




void FUN_00102905(void)

{
  return;
}




void FUN_001028d9(void)

{
  return;
}




void FUN_00102048(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00101fb7(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_00102248(undefined8 param_1)

{
  return param_1;
}




void FUN_0010297e(void)

{
  return;
}




undefined8 FUN_00101d0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101fea(param_1);
  uVar2 = FUN_00101c72(param_1);
  FUN_0010200e(local_38,uVar2,uVar1);
  uVar3 = FUN_00101cfc(param_2);
  uVar4 = FUN_00101c50(uVar1);
  FUN_00102087(uVar2,uVar4,uVar3);
  FUN_001020c4(local_38,0);
  FUN_00102048(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001028fa(void)

{
  return;
}




void FUN_00101c50(long param_1)

{
  FUN_00101f86(param_1 + 0x10);
  return;
}




void FUN_00102620(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102b8f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001024ef(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001017b2(undefined8 param_1)

{
  FUN_0010181e(param_1);
  return;
}




void FUN_00102545(undefined4 param_1)

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




void FUN_00102bcd(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001023a2(undefined8 *param_1)

{
  FUN_00101c50(*param_1);
  return;
}




void FUN_001023e9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001025c7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101c72(undefined8 param_1)

{
  return param_1;
}




void FUN_0010156d(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101792(local_58);
  local_60 = (void *)0x0;
  local_60 = calloc(1,8);
                    /* try { // try from 001015be to 001015fb has its CatchHandler @ 00101647 */
  FUN_0010184a(local_58,&local_60);
  FUN_0010184a(local_58,&local_60);
  FUN_0010184a(local_58,&local_60);
  FUN_00101884(local_38,local_58);
                    /* try { // try from 00101603 to 00101607 has its CatchHandler @ 00101632 */
  FUN_001022c5(local_38);
  FUN_001017b2(local_38);
  FUN_001017b2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001017fe(undefined8 param_1)

{
  FUN_00101970(param_1);
  return;
}




void FUN_00102272(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102320(param_1);
  __ptr = (undefined4 *)*puVar1;
  *__ptr = 1;
  __ptr[1] = 1;
  FUN_00102620(__ptr);
  free(__ptr);
  return;
}




void FUN_00102910(void)

{
  return;
}




void FUN_00102087(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cfc(param_3);
  FUN_00102196(param_1,param_2,uVar1);
  return;
}




void FUN_001017d2(undefined8 param_1)

{
  FUN_00101950(param_1);
  FUN_001016fc(param_1);
  return;
}




void FUN_00101c40(void)

{
  return;
}




void FUN_00102952(void)

{
  return;
}




undefined8 FUN_00101afc(undefined8 param_1)

{
  return param_1;
}




void FUN_0010212e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101970(void)

{
  return;
}




void FUN_001025f2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101950(undefined8 param_1)

{
  FUN_00101c40(param_1);
  return;
}




void FUN_00101884(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101afc(param_2);
  FUN_00101aab(&local_21,uVar1);
  FUN_00101b0e(param_1,&local_21);
  FUN_001017fe(&local_21);
  uVar1 = FUN_00101b96(param_2);
  uVar2 = FUN_00101b46(param_2);
                    /* try { // try from 00101910 to 00101914 has its CatchHandler @ 00101917 */
  FUN_00101be2(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a4a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101cfc(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d0e(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101dd8(param_1,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_001016fc(undefined8 param_1)

{
  FUN_0010171c(param_1);
  return;
}




void FUN_00102968(void)

{
  return;
}




void FUN_00102320(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001019fe(param_1);
  FUN_0010237e(&local_18);
  FUN_001023a2(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001027b7(long param_1,ulong param_2,long param_3)

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




long FUN_001020c4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102499(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001016e6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101469(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101792(local_58);
  local_60 = (void *)0x0;
  local_60 = calloc(1,8);
                    /* try { // try from 001014ba to 001014f7 has its CatchHandler @ 00101543 */
  FUN_0010184a(local_58,&local_60);
  FUN_0010184a(local_58,&local_60);
  FUN_0010184a(local_58,&local_60);
  FUN_00101884(local_38,local_58);
                    /* try { // try from 001014ff to 00101503 has its CatchHandler @ 0010152e */
  FUN_00102272(local_38);
  FUN_001017b2(local_38);
  FUN_001017b2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101b46(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eae(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101b96(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eae(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010181e(undefined8 param_1)

{
  FUN_00101980(param_1);
  FUN_00101752(param_1);
  return;
}




void FUN_00101cae(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fb7(param_1,param_2,1);
  return;
}




void FUN_0010295d(void)

{
  return;
}




int FUN_001028b4(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102973(void)

{
  return;
}




void FUN_00101dd8(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_0010259f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_00101c84(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fa4(param_1,param_2);
  return;
}




void FUN_00101f86(undefined8 param_1)

{
  FUN_0010211c(param_1);
  return;
}




void FUN_00102bae(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101fb7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010212e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101ecc(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_0010293c(void)

{
  return;
}




void FUN_00102196(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101cfc(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001016e6(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00102af3(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101cfc(param_2);
  uVar2 = FUN_001019fe(param_1);
  FUN_00101a4a(param_1,uVar2,uVar1);
  return;
}




long * FUN_0010237e(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001028ce(void)

{
  return;
}




void FUN_0010171c(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101e30(undefined8 param_1,undefined8 param_2)

{
  FUN_001020e6(param_1,param_2);
  return;
}




void FUN_00101eae(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001021f8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010225a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001024c4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102994(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102c70(void)

{
  return;
}




void FUN_00102989(void)

{
  return;
}




bool FUN_00102a98(pthread_t *param_1)

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




void FUN_00102443(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102653(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101681(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001023c3("Calling good()...");
  FUN_00101671();
  FUN_001023c3("Finished good()");
  FUN_001023c3("Calling bad()...");
  FUN_00101469();
  FUN_001023c3("Finished bad()");
  return 0;
}




void FUN_001021da(undefined8 param_1)

{
  FUN_00102248(param_1);
  return;
}




undefined8 FUN_00102183(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e5a(param_2);
  FUN_00101e6c(param_1,uVar1);
  return;
}




void FUN_00101be2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101ecc(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101f16(&local_18);
    FUN_00101f38(local_10,uVar2);
    FUN_00101ef2(&local_18);
  }
  return;
}




undefined8 FUN_00102896(void)

{
  return 1;
}




void FUN_0010241b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101752(undefined8 param_1)

{
  FUN_001017fe(param_1);
  return;
}




undefined8 FUN_001019fe(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cde(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010200e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102183(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102155(undefined8 param_1,undefined8 param_2)

{
  FUN_001021f8(param_1,param_2,0);
  return;
}




void FUN_00101f16(undefined8 *param_1)

{
  FUN_001020fa(*param_1);
  return;
}




void FUN_001022c5(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102320(param_1);
  __ptr = (undefined4 *)*puVar1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    FUN_00102620(__ptr);
    free(__ptr);
  }
  return;
}




void FUN_00102931(void)

{
  return;
}




void FUN_00101772(undefined8 param_1)

{
  FUN_001017d2(param_1);
  return;
}




undefined8 FUN_0010225a(void)

{
  return 0x555555555555555;
}




void FUN_001023c3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001028a5(void)

{
  return 0;
}




void FUN_0010291b(void)

{
  return;
}




void FUN_0010246f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010184a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001019fe(param_1);
  FUN_00101a4a(param_1,uVar1,param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00101fa4(void)

{
  return;
}




undefined8 FUN_00101cfc(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e02(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e30(param_1,param_2);
  return param_1;
}




void FUN_00101e6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e5a(param_2);
  FUN_00101e30(param_1,uVar1);
  FUN_001016fc(param_1);
  return;
}




void FUN_001028ef(void)

{
  return;
}




void FUN_001028e4(void)

{
  return;
}




undefined8 FUN_00102b16(undefined8 *param_1)

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



