
undefined8 FUN_00101e04(undefined8 param_1)

{
  return param_1;
}




void FUN_001020fa(void)

{
  return;
}




void FUN_00101616(long param_1)

{
  FUN_00101638(param_1 + 0x10);
  return;
}




void FUN_00101a1e(undefined8 param_1)

{
  FUN_00101b80(param_1);
  FUN_00101952(param_1);
  return;
}




void FUN_0010233c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010239e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101b50(undefined8 param_1)

{
  FUN_00101df4(param_1);
  return;
}




void FUN_00102919(void)

{
  return;
}




undefined8 FUN_00101f76(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fa4(param_1,param_2);
  return param_1;
}




undefined8 FUN_00102ae6(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102040(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102164(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022c7(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102ba1(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




long * FUN_001015b2(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001028cc(void)

{
  return;
}




undefined8 FUN_0010239e(void)

{
  return 0x555555555555555;
}




void FUN_00102272(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010238c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001018e5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102987(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010295b(void)

{
  return;
}




undefined8 FUN_001022c7(undefined8 param_1)

{
  return param_1;
}




void FUN_001024b7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e40(undefined8 param_1,undefined8 param_2)

{
  FUN_0010210d(param_1,param_2,1);
  return;
}




void FUN_0010297c(void)

{
  return;
}




undefined8 FUN_00101cfa(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102022(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102903(void)

{
  return;
}




void FUN_001028c1(void)

{
  return;
}




void FUN_001020ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e6f(param_2);
  uVar2 = FUN_00101566(param_1);
  FUN_00101bfe(param_1,uVar2,uVar1);
  return;
}




void FUN_001018fc(undefined8 param_1)

{
  FUN_0010191c(param_1);
  return;
}




void FUN_001028d7(void)

{
  return;
}




undefined8 * FUN_00102066(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001025e5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102646(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001028ed(void)

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




undefined8 FUN_00101d4a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102022(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001015f8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101952(undefined8 param_1)

{
  FUN_001019fe(param_1);
  return;
}




void FUN_0010250d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001029be(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102987,local_18);
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




void FUN_001022da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101e6f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018e5(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010191c(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101cc2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fce(param_2);
  FUN_00101fe0(param_1,uVar1);
  return;
}




void FUN_00102bc0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b70(void)

{
  return;
}




void FUN_001023b6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001019fe(undefined8 param_1)

{
  FUN_00101b70(param_1);
  return;
}




void FUN_001028f8(void)

{
  return;
}




void FUN_001019d2(undefined8 param_1)

{
  FUN_00101b50(param_1);
  FUN_001018fc(param_1);
  return;
}




void FUN_001019b2(undefined8 param_1)

{
  FUN_00101a1e(param_1);
  return;
}




void FUN_00101a84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101cb0(param_2);
  FUN_00101c5f(&local_21,uVar1);
  FUN_00101cc2(param_1,&local_21);
  FUN_001019fe(&local_21);
  uVar1 = FUN_00101d4a(param_2);
  uVar2 = FUN_00101cfa(param_2);
                    /* try { // try from 00101b10 to 00101b14 has its CatchHandler @ 00101b17 */
  FUN_00101d96(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101566(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001015f8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101668(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101992(local_58);
  local_60 = (void *)0x0;
  local_60 = calloc(1,8);
                    /* try { // try from 001016b9 to 001016f6 has its CatchHandler @ 00101742 */
  FUN_00101a4a(local_58,&local_60);
  FUN_00101a4a(local_58,&local_60);
  FUN_00101a4a(local_58,&local_60);
  FUN_00101a84(local_38,local_58);
                    /* try { // try from 001016fe to 00101702 has its CatchHandler @ 0010172d */
  FUN_00101469(local_38);
  FUN_001019b2(local_38);
  FUN_001019b2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001014b5(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101508(param_1);
  puVar1 = (undefined8 *)*puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 5;
    FUN_0010248c(*puVar1);
    free(puVar1);
  }
  return;
}




void FUN_00102c60(void)

{
  return;
}




void FUN_00102592(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102924(void)

{
  return;
}




void FUN_0010231e(undefined8 param_1)

{
  FUN_0010238c(param_1);
  return;
}




undefined8 FUN_00102898(void)

{
  return 0;
}




undefined8 FUN_00101656(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_001015d6(undefined8 *param_1)

{
  FUN_00101616(*param_1);
  return;
}




void FUN_00101bfe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e6f(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e82(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f4c(param_1,1);
  return;
}




undefined8 FUN_00101c5f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f76(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101972(undefined8 param_1)

{
  FUN_001019d2(param_1);
  return;
}




void FUN_00101df4(void)

{
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




void FUN_00102945(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




undefined8 FUN_00101e6f(undefined8 param_1)

{
  return param_1;
}




void FUN_001028e2(void)

{
  return;
}




void FUN_00101508(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101566(param_1);
  FUN_001015b2(&local_18);
  FUN_001015d6(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d96(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102040(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010208a(&local_18);
    FUN_001020ac(local_10,uVar2);
    FUN_00102066(&local_18);
  }
  return;
}




long FUN_0010221a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102250(long param_1)

{
  FUN_0010231e(param_1 + 0x10);
  return;
}




void FUN_00102140(undefined8 param_1)

{
  FUN_00102299(param_1,1);
  return;
}




void FUN_00102b82(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102436(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001021dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e6f(param_3);
  FUN_001022da(param_1,param_2,uVar1);
  return;
}




void FUN_001025ba(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102022(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102950(void)

{
  return;
}




void FUN_0010176c(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101992(local_58);
  local_60 = (void *)0x0;
  local_60 = calloc(1,8);
                    /* try { // try from 001017bd to 001017fa has its CatchHandler @ 00101846 */
  FUN_00101a4a(local_58,&local_60);
  FUN_00101a4a(local_58,&local_60);
  FUN_00101a4a(local_58,&local_60);
  FUN_00101a84(local_38,local_58);
                    /* try { // try from 00101802 to 00101806 has its CatchHandler @ 00101831 */
  FUN_001014b5(local_38);
  FUN_001019b2(local_38);
  FUN_001019b2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f4c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00101fce(undefined8 param_1)

{
  return param_1;
}




void FUN_0010248c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int FUN_001028a7(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010210d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102272(param_1,param_2,param_3);
  return;
}




ulong FUN_001027aa(long param_1,ulong param_2,long param_3)

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




void FUN_0010290e(void)

{
  return;
}




void FUN_00101638(undefined8 param_1)

{
  FUN_00101656(param_1);
  return;
}




void FUN_0010208a(undefined8 *param_1)

{
  FUN_00102250(*param_1);
  return;
}




void FUN_0010240e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102462(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101b80(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101616(local_20);
    uVar3 = FUN_00101e04(param_1);
    FUN_00101e16(uVar3,uVar2);
    FUN_00101e40(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00101cb0(undefined8 param_1)

{
  return param_1;
}




void FUN_0010292f(void)

{
  return;
}




ulong FUN_001026a6(long param_1,ulong param_2,long param_3)

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




void FUN_00101870(void)

{
  FUN_0010176c();
  return;
}




void FUN_00101a4a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101566(param_1);
  FUN_00101bfe(param_1,uVar1,param_2);
  return;
}




void FUN_00102299(undefined8 param_1,undefined8 param_2)

{
  FUN_0010233c(param_1,param_2,0);
  return;
}




void FUN_00101fe0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fce(param_2);
  FUN_00101fa4(param_1,uVar1);
  FUN_001018fc(param_1);
  return;
}




void FUN_001023dc(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010219e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010210d(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102538(undefined4 param_1)

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




undefined8 FUN_00102b09(undefined8 *param_1)

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




undefined8 FUN_00101880(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001023b6("Calling good()...");
  FUN_00101870();
  FUN_001023b6("Finished good()");
  FUN_001023b6("Calling bad()...");
  FUN_00101668();
  FUN_001023b6("Finished bad()");
  return 0;
}




void FUN_001024e2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102613(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010293a(void)

{
  return;
}




bool FUN_00102a8b(pthread_t *param_1)

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




undefined8 FUN_00102889(void)

{
  return 1;
}




void FUN_00101992(undefined8 param_1)

{
  FUN_00101972(param_1);
  return;
}




void FUN_00101469(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101508(param_1);
  puVar1 = (undefined8 *)*puVar1;
  *puVar1 = 5;
  FUN_0010248c(*puVar1);
  free(puVar1);
  return;
}




void FUN_0010223c(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_00101e16(undefined8 param_1,undefined8 param_2)

{
  FUN_001020fa(param_1,param_2);
  return;
}




undefined8 FUN_00101e82(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102140(param_1);
  uVar2 = FUN_00101e04(param_1);
  FUN_00102164(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e6f(param_2);
  uVar4 = FUN_00101616(uVar1);
  FUN_001021dd(uVar2,uVar4,uVar3);
  FUN_0010221a(local_38,0);
  FUN_0010219e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101fa4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010223c(param_1,param_2);
  return;
}




void FUN_00102971(void)

{
  return;
}




void FUN_00102966(void)

{
  return;
}



