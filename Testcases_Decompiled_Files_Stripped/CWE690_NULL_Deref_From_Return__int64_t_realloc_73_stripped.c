
void FUN_00101e1a(undefined8 param_1,undefined8 param_2)

{
  FUN_001020fe(param_1,param_2);
  return;
}




void FUN_00101638(undefined8 param_1)

{
  FUN_00101656(param_1);
  return;
}




void FUN_00101a4e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101566(param_1);
  FUN_00101c02(param_1,uVar1,param_2);
  return;
}




void FUN_00102240(void)

{
  return;
}




void FUN_00101b74(void)

{
  return;
}




void FUN_001028d0(void)

{
  return;
}




void FUN_00101fa8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102240(param_1,param_2);
  return;
}




void FUN_0010295f(void)

{
  return;
}




void FUN_00102bc4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102044(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102980(void)

{
  return;
}




void FUN_001015d6(undefined8 *param_1)

{
  FUN_00101616(*param_1);
  return;
}




void FUN_0010264a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102276(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102144(undefined8 param_1)

{
  FUN_0010229d(param_1,1);
  return;
}




void FUN_00102254(long param_1)

{
  FUN_00102322(param_1 + 0x10);
  return;
}




void FUN_00101900(undefined8 param_1)

{
  FUN_00101920(param_1);
  return;
}




void FUN_0010293e(void)

{
  return;
}




void FUN_00102912(void)

{
  return;
}




void FUN_001021a2(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102111(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_001023a2(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00102b0d(undefined8 *param_1)

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




undefined8 FUN_00101e73(undefined8 param_1)

{
  return param_1;
}




void FUN_00102933(void)

{
  return;
}




undefined8 FUN_00101d4e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102026(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_001028ab(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102617(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101920(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




ulong FUN_001026aa(long param_1,ulong param_2,long param_3)

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




void FUN_00102490(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001024e6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010288d(void)

{
  return 1;
}




void FUN_00101469(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101508(param_1);
  puVar1 = (undefined8 *)*puVar1;
  *puVar1 = 5;
  FUN_001024bb(*puVar1);
  free(puVar1);
  return;
}




void FUN_00101d9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102044(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010208e(&local_18);
    FUN_001020b0(local_10,uVar2);
    FUN_0010206a(&local_18);
  }
  return;
}




void FUN_00101616(long param_1)

{
  FUN_00101638(param_1 + 0x10);
  return;
}




void FUN_00101976(undefined8 param_1)

{
  FUN_001019d6(param_1);
  return;
}




void FUN_001023e0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102949(void)

{
  return;
}




void FUN_001021e1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e73(param_3);
  FUN_001022de(param_1,param_2,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_00101956(undefined8 param_1)

{
  FUN_00101a02(param_1);
  return;
}




undefined8 FUN_00101cfe(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102026(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_0010298b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101b84(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101616(local_20);
    uVar3 = FUN_00101e08(param_1);
    FUN_00101e1a(uVar3,uVar2);
    FUN_00101e44(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_0010229d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102340(param_1,param_2,0);
  return;
}




void FUN_00101a22(undefined8 param_1)

{
  FUN_00101b84(param_1);
  FUN_00101956(param_1);
  return;
}




undefined8 FUN_0010289c(void)

{
  return 0;
}




void FUN_00101a02(undefined8 param_1)

{
  FUN_00101b74(param_1);
  return;
}




void FUN_001019d6(undefined8 param_1)

{
  FUN_00101b54(param_1);
  FUN_00101900(param_1);
  return;
}




void FUN_00101b54(undefined8 param_1)

{
  FUN_00101df8(param_1);
  return;
}




long * FUN_001015b2(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_0010176e(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101996(local_58);
  local_60 = (void *)0x0;
  local_60 = realloc((void *)0x0,8);
                    /* try { // try from 001017c1 to 001017fe has its CatchHandler @ 0010184a */
  FUN_00101a4e(local_58,&local_60);
  FUN_00101a4e(local_58,&local_60);
  FUN_00101a4e(local_58,&local_60);
  FUN_00101a88(local_38,local_58);
                    /* try { // try from 00101806 to 0010180a has its CatchHandler @ 00101835 */
  FUN_001014b5(local_38);
  FUN_001019b6(local_38);
  FUN_001019b6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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




bool FUN_00102a8f(pthread_t *param_1)

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




void FUN_0010243a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001028db(void)

{
  return;
}




long FUN_0010221e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001025be(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101668(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101996(local_58);
  local_60 = (void *)0x0;
  local_60 = realloc((void *)0x0,8);
                    /* try { // try from 001016bb to 001016f8 has its CatchHandler @ 00101744 */
  FUN_00101a4e(local_58,&local_60);
  FUN_00101a4e(local_58,&local_60);
  FUN_00101a4e(local_58,&local_60);
  FUN_00101a88(local_38,local_58);
                    /* try { // try from 00101700 to 00101704 has its CatchHandler @ 0010172f */
  FUN_00101469(local_38);
  FUN_001019b6(local_38);
  FUN_001019b6(local_58);
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




void FUN_001015f8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101c63(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f7a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101cb4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101996(undefined8 param_1)

{
  FUN_00101976(param_1);
  return;
}




undefined8 FUN_00101e08(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001029c2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010298b,local_18);
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




void FUN_001028fc(void)

{
  return;
}




undefined8 FUN_00102aea(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101e86(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102144(param_1);
  uVar2 = FUN_00101e08(param_1);
  FUN_00102168(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e73(param_2);
  uVar4 = FUN_00101616(uVar1);
  FUN_001021e1(uVar2,uVar4,uVar3);
  FUN_0010221e(local_38,0);
  FUN_001021a2(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




ulong FUN_001027ae(long param_1,ulong param_2,long param_3)

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




void FUN_00101df8(void)

{
  return;
}




void FUN_001020b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e73(param_2);
  uVar2 = FUN_00101566(param_1);
  FUN_00101c02(param_1,uVar2,uVar1);
  return;
}




void FUN_00102111(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102276(param_1,param_2,param_3);
  return;
}




void FUN_00102026(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102975(void)

{
  return;
}




void FUN_00102322(undefined8 param_1)

{
  FUN_00102390(param_1);
  return;
}




void FUN_00102c60(void)

{
  return;
}




void FUN_0010208e(undefined8 *param_1)

{
  FUN_00102254(*param_1);
  return;
}




void FUN_00102466(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102907(void)

{
  return;
}




void FUN_00101874(void)

{
  FUN_0010176e();
  return;
}




undefined8 FUN_00101f7a(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fa8(param_1,param_2);
  return param_1;
}




void FUN_00101fe4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fd2(param_2);
  FUN_00101fa8(param_1,uVar1);
  FUN_00101900(param_1);
  return;
}




undefined8 FUN_00102390(undefined8 param_1)

{
  return param_1;
}




void FUN_001025e9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102ba5(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102b86(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
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




void FUN_0010253c(undefined4 param_1)

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




void FUN_001028c5(void)

{
  return;
}




undefined8 FUN_00101656(undefined8 param_1)

{
  return param_1;
}




void FUN_00102340(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001023a2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001022de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101e73(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018e9(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101c02(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e73(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e86(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f50(param_1,1);
  return;
}




void FUN_00101cc6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fd2(param_2);
  FUN_00101fe4(param_1,uVar1);
  return;
}




void FUN_001028e6(void)

{
  return;
}




void FUN_00102511(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101884(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001023ba("Calling good()...");
  FUN_00101874();
  FUN_001023ba("Finished good()");
  FUN_001023ba("Calling bad()...");
  FUN_00101668();
  FUN_001023ba("Finished bad()");
  return 0;
}




void FUN_00101a88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101cb4(param_2);
  FUN_00101c63(&local_21,uVar1);
  FUN_00101cc6(param_1,&local_21);
  FUN_00101a02(&local_21);
  uVar1 = FUN_00101d4e(param_2);
  uVar2 = FUN_00101cfe(param_2);
                    /* try { // try from 00101b14 to 00101b18 has its CatchHandler @ 00101b1b */
  FUN_00101d9a(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102168(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022cb(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_001022cb(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_0010206a(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102412(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010296a(void)

{
  return;
}




undefined8 FUN_001018e9(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001023ba(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001024bb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001028f1(void)

{
  return;
}




void FUN_00102954(void)

{
  return;
}




void FUN_00102596(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001019b6(undefined8 param_1)

{
  FUN_00101a22(param_1);
  return;
}




void FUN_001014b5(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101508(param_1);
  puVar1 = (undefined8 *)*puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 5;
    FUN_001024bb(*puVar1);
    free(puVar1);
  }
  return;
}




void FUN_001020fe(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00101e44(undefined8 param_1,undefined8 param_2)

{
  FUN_00102111(param_1,param_2,1);
  return;
}




void FUN_00101f50(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00101fd2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102928(void)

{
  return;
}




void FUN_0010291d(void)

{
  return;
}



