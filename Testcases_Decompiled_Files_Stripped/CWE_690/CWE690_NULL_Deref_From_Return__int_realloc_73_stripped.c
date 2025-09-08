
void FUN_00101e14(undefined8 param_1,undefined8 param_2)

{
  FUN_001020f8(param_1,param_2);
  return;
}




void FUN_00101632(undefined8 param_1)

{
  FUN_00101650(param_1);
  return;
}




void FUN_00101a48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101560(param_1);
  FUN_00101bfc(param_1,uVar1,param_2);
  return;
}




void FUN_0010223a(void)

{
  return;
}




void FUN_00101b6e(void)

{
  return;
}




void FUN_001028ca(void)

{
  return;
}




void FUN_00101fa2(undefined8 param_1,undefined8 param_2)

{
  FUN_0010223a(param_1,param_2);
  return;
}




void FUN_00102959(void)

{
  return;
}




void FUN_00102bbe(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_0010203e(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_0010297a(void)

{
  return;
}




void FUN_001015d0(undefined8 *param_1)

{
  FUN_00101610(*param_1);
  return;
}




void FUN_00102644(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102270(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010213e(undefined8 param_1)

{
  FUN_00102297(param_1,1);
  return;
}




void FUN_0010224e(long param_1)

{
  FUN_0010231c(param_1 + 0x10);
  return;
}




void FUN_001018fa(undefined8 param_1)

{
  FUN_0010191a(param_1);
  return;
}




void FUN_00102938(void)

{
  return;
}




void FUN_0010290c(void)

{
  return;
}




void FUN_0010219c(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010210b(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_0010239c(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00102b07(undefined8 *param_1)

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




undefined8 FUN_00101e6d(undefined8 param_1)

{
  return param_1;
}




void FUN_0010292d(void)

{
  return;
}




undefined8 FUN_00101d48(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102020(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_001028a5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102611(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010191a(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




ulong FUN_001026a4(long param_1,ulong param_2,long param_3)

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




void FUN_0010248a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001024e0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102887(void)

{
  return 1;
}




void FUN_00101469(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101502(param_1);
  __ptr = (undefined4 *)*puVar1;
  *__ptr = 5;
  FUN_0010240c(*__ptr);
  free(__ptr);
  return;
}




void FUN_00101d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010203e(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102088(&local_18);
    FUN_001020aa(local_10,uVar2);
    FUN_00102064(&local_18);
  }
  return;
}




void FUN_00101610(long param_1)

{
  FUN_00101632(param_1 + 0x10);
  return;
}




void FUN_00101970(undefined8 param_1)

{
  FUN_001019d0(param_1);
  return;
}




void FUN_001023da(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102943(void)

{
  return;
}




void FUN_001021db(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e6d(param_3);
  FUN_001022d8(param_1,param_2,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_00101950(undefined8 param_1)

{
  FUN_001019fc(param_1);
  return;
}




undefined8 FUN_00101cf8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102020(&local_18,*param_1);
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




void FUN_00102985(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101b7e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101610(local_20);
    uVar3 = FUN_00101e02(param_1);
    FUN_00101e14(uVar3,uVar2);
    FUN_00101e3e(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102297(undefined8 param_1,undefined8 param_2)

{
  FUN_0010233a(param_1,param_2,0);
  return;
}




void FUN_00101a1c(undefined8 param_1)

{
  FUN_00101b7e(param_1);
  FUN_00101950(param_1);
  return;
}




undefined8 FUN_00102896(void)

{
  return 0;
}




void FUN_001019fc(undefined8 param_1)

{
  FUN_00101b6e(param_1);
  return;
}




void FUN_001019d0(undefined8 param_1)

{
  FUN_00101b4e(param_1);
  FUN_001018fa(param_1);
  return;
}




void FUN_00101b4e(undefined8 param_1)

{
  FUN_00101df2(param_1);
  return;
}




long * FUN_001015ac(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101768(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101990(local_58);
  local_60 = (void *)0x0;
  local_60 = realloc((void *)0x0,4);
                    /* try { // try from 001017bb to 001017f8 has its CatchHandler @ 00101844 */
  FUN_00101a48(local_58,&local_60);
  FUN_00101a48(local_58,&local_60);
  FUN_00101a48(local_58,&local_60);
  FUN_00101a82(local_38,local_58);
                    /* try { // try from 00101800 to 00101804 has its CatchHandler @ 0010182f */
  FUN_001014b2(local_38);
  FUN_001019b0(local_38);
  FUN_001019b0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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




bool FUN_00102a89(pthread_t *param_1)

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




void FUN_00102434(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001028d5(void)

{
  return;
}




long FUN_00102218(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001025b8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101662(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101990(local_58);
  local_60 = (void *)0x0;
  local_60 = realloc((void *)0x0,4);
                    /* try { // try from 001016b5 to 001016f2 has its CatchHandler @ 0010173e */
  FUN_00101a48(local_58,&local_60);
  FUN_00101a48(local_58,&local_60);
  FUN_00101a48(local_58,&local_60);
  FUN_00101a82(local_38,local_58);
                    /* try { // try from 001016fa to 001016fe has its CatchHandler @ 00101729 */
  FUN_00101469(local_38);
  FUN_001019b0(local_38);
  FUN_001019b0(local_58);
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




void FUN_001015f2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101c5d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f74(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101cae(undefined8 param_1)

{
  return param_1;
}




void FUN_00101990(undefined8 param_1)

{
  FUN_00101970(param_1);
  return;
}




undefined8 FUN_00101e02(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001029bc(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102985,local_18);
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




void FUN_001028f6(void)

{
  return;
}




undefined8 FUN_00102ae4(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101e80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010213e(param_1);
  uVar2 = FUN_00101e02(param_1);
  FUN_00102162(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e6d(param_2);
  uVar4 = FUN_00101610(uVar1);
  FUN_001021db(uVar2,uVar4,uVar3);
  FUN_00102218(local_38,0);
  FUN_0010219c(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




ulong FUN_001027a8(long param_1,ulong param_2,long param_3)

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




void FUN_00101df2(void)

{
  return;
}




void FUN_001020aa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e6d(param_2);
  uVar2 = FUN_00101560(param_1);
  FUN_00101bfc(param_1,uVar2,uVar1);
  return;
}




void FUN_0010210b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102270(param_1,param_2,param_3);
  return;
}




void FUN_00102020(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010296f(void)

{
  return;
}




void FUN_0010231c(undefined8 param_1)

{
  FUN_0010238a(param_1);
  return;
}




void FUN_00102c60(void)

{
  return;
}




void FUN_00102088(undefined8 *param_1)

{
  FUN_0010224e(*param_1);
  return;
}




void FUN_00102460(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102901(void)

{
  return;
}




void FUN_0010186e(void)

{
  FUN_00101768();
  return;
}




undefined8 FUN_00101f74(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fa2(param_1,param_2);
  return param_1;
}




void FUN_00101fde(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fcc(param_2);
  FUN_00101fa2(param_1,uVar1);
  FUN_001018fa(param_1);
  return;
}




undefined8 FUN_0010238a(undefined8 param_1)

{
  return param_1;
}




void FUN_001025e3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102b9f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102b80(pthread_mutex_t *param_1)

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




void FUN_00102536(undefined4 param_1)

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




void FUN_001028bf(void)

{
  return;
}




undefined8 FUN_00101650(undefined8 param_1)

{
  return param_1;
}




void FUN_0010233a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010239c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001022d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101e6d(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018e3(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e6d(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e80(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f4a(param_1,1);
  return;
}




void FUN_00101cc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fcc(param_2);
  FUN_00101fde(param_1,uVar1);
  return;
}




void FUN_001028e0(void)

{
  return;
}




void FUN_0010250b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010187e(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001023b4("Calling good()...");
  FUN_0010186e();
  FUN_001023b4("Finished good()");
  FUN_001023b4("Calling bad()...");
  FUN_00101662();
  FUN_001023b4("Finished bad()");
  return 0;
}




void FUN_00101a82(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101cae(param_2);
  FUN_00101c5d(&local_21,uVar1);
  FUN_00101cc0(param_1,&local_21);
  FUN_001019fc(&local_21);
  uVar1 = FUN_00101d48(param_2);
  uVar2 = FUN_00101cf8(param_2);
                    /* try { // try from 00101b0e to 00101b12 has its CatchHandler @ 00101b15 */
  FUN_00101d94(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102162(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022c5(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_001022c5(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00102064(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010240c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102964(void)

{
  return;
}




undefined8 FUN_001018e3(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001023b4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001024b5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001028eb(void)

{
  return;
}




void FUN_0010294e(void)

{
  return;
}




void FUN_00102590(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001019b0(undefined8 param_1)

{
  FUN_00101a1c(param_1);
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
    FUN_0010240c(*__ptr);
    free(__ptr);
  }
  return;
}




void FUN_001020f8(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00101e3e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010210b(param_1,param_2,1);
  return;
}




void FUN_00101f4a(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00101fcc(undefined8 param_1)

{
  return param_1;
}




void FUN_00102922(void)

{
  return;
}




void FUN_00102917(void)

{
  return;
}



