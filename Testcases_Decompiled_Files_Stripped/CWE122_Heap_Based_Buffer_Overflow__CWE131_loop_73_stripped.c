
undefined8 FUN_00101f67(undefined8 param_1)

{
  return param_1;
}




void FUN_00101744(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a8a(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(10);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001017a3 to 001017e0 has its CatchHandler @ 0010182c */
  FUN_00101b42(local_58,&local_60);
  FUN_00101b42(local_58,&local_60);
  FUN_00101b42(local_58,&local_60);
  FUN_00101b7c(local_38,local_58);
                    /* try { // try from 001017e8 to 001017ec has its CatchHandler @ 00101817 */
  FUN_00101469(local_38);
  FUN_00101aaa(local_38);
  FUN_00101aaa(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c48(undefined8 param_1)

{
  FUN_00101eec(param_1);
  return;
}




void FUN_0010236a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101cf6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f67(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f7a(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102044(param_1,1);
  return;
}




void FUN_001029da(void)

{
  return;
}




void FUN_001020d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020c6(param_2);
  FUN_0010209c(param_1,uVar1);
  FUN_001019f4(param_1);
  return;
}




void FUN_00102a69(void)

{
  return;
}




void FUN_00102d60(void)

{
  return;
}




void FUN_00102182(undefined8 *param_1)

{
  FUN_00102348(*param_1);
  return;
}




undefined8 FUN_00102ab6(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a7f,local_18);
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




void FUN_001016f2(long param_1)

{
  FUN_00101714(param_1 + 0x10);
  return;
}




ulong FUN_001028a2(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001023bf(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00102296(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102205(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102391(undefined8 param_1,undefined8 param_2)

{
  FUN_00102434(param_1,param_2,0);
  return;
}




void FUN_00101a4a(undefined8 param_1)

{
  FUN_00101af6(param_1);
  return;
}




void FUN_00102a48(void)

{
  return;
}




void FUN_00102a1c(void)

{
  return;
}




long FUN_00102312(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001024d4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102c99(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102044(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102a3d(void)

{
  return;
}




void FUN_00101eec(void)

{
  return;
}




void FUN_001029c4(void)

{
  return;
}




ulong FUN_0010279e(long param_1,ulong param_2,long param_3)

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




void FUN_00101a6a(undefined8 param_1)

{
  FUN_00101aca(param_1);
  return;
}




undefined8 FUN_00102981(void)

{
  return 1;
}




void FUN_001025da(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102630(undefined4 param_1)

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




int FUN_0010299f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001015e4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101642(param_1);
  FUN_0010168e(&local_18);
  FUN_001016b2(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101efc(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101732(undefined8 param_1)

{
  return param_1;
}




void FUN_00101aaa(undefined8 param_1)

{
  FUN_00101b16(param_1);
  return;
}




void FUN_0010252e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a53(void)

{
  return;
}




void FUN_00102334(void)

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




void FUN_00101a8a(undefined8 param_1)

{
  FUN_00101a6a(param_1);
  return;
}




void FUN_00101e8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102138(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102182(&local_18);
    FUN_001021a4(local_10,uVar2);
    FUN_0010215e(&local_18);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




bool FUN_00102b83(pthread_t *param_1)

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




undefined8 FUN_00101d57(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010206e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001023d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f67(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019dd(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101b7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101da8(param_2);
  FUN_00101d57(&local_21,uVar1);
  FUN_00101dba(param_1,&local_21);
  FUN_00101af6(&local_21);
  uVar1 = FUN_00101e42(param_2);
  uVar2 = FUN_00101df2(param_2);
                    /* try { // try from 00101c08 to 00101c0c has its CatchHandler @ 00101c0f */
  FUN_00101e8e(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029b9(void)

{
  return;
}




void FUN_00101b42(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101642(param_1);
  FUN_00101cf6(param_1,uVar1,param_2);
  return;
}




void FUN_00101b16(undefined8 param_1)

{
  FUN_00101c78(param_1);
  FUN_00101a4a(param_1);
  return;
}




void FUN_00101c78(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016f2(local_20);
    uVar3 = FUN_00101efc(param_1);
    FUN_00101f0e(uVar3,uVar2);
    FUN_00101f38(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_001016d4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101978(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024ae("Calling good()...");
  FUN_00101968();
  FUN_001024ae("Finished good()");
  FUN_001024ae("Calling bad()...");
  FUN_00101744();
  FUN_001024ae("Finished bad()");
  return 0;
}




long * FUN_0010168e(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00102c01(undefined8 *param_1)

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




void FUN_00102584(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001029e5(void)

{
  return;
}




void FUN_00102348(long param_1)

{
  FUN_00102416(param_1 + 0x10);
  return;
}




void FUN_0010270b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101968(void)

{
  FUN_00101856();
  return;
}




void FUN_00101526(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015e4(param_1);
  __ptr = (undefined4 *)*puVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  for (local_48 = 0; local_48 < 10; local_48 = local_48 + 1) {
    __ptr[local_48] = *(undefined4 *)((long)&local_38 + local_48 * 4);
  }
  FUN_00102506(*__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101714(undefined8 param_1)

{
  FUN_00101732(param_1);
  return;
}




void FUN_00101dba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020c6(param_2);
  FUN_001020d8(param_1,uVar1);
  return;
}




undefined8 FUN_00101df2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010211a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101aca(undefined8 param_1)

{
  FUN_00101c48(param_1);
  FUN_001019f4(param_1);
  return;
}




void FUN_00101f38(undefined8 param_1,undefined8 param_2)

{
  FUN_00102205(param_1,param_2,1);
  return;
}




undefined8 FUN_00102bde(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102a06(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00102c7a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_0010206e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010209c(param_1,param_2);
  return param_1;
}




undefined8 FUN_00102990(void)

{
  return 0;
}




void FUN_001016b2(undefined8 *param_1)

{
  FUN_001016f2(*param_1);
  return;
}




void FUN_00101f0e(undefined8 param_1,undefined8 param_2)

{
  FUN_001021f2(param_1,param_2);
  return;
}




void FUN_00102205(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010236a(param_1,param_2,param_3);
  return;
}




void FUN_0010225c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023bf(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 * FUN_0010215e(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102a7f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102484(undefined8 param_1)

{
  return param_1;
}




void FUN_001021f2(void)

{
  return;
}




void FUN_001025af(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a11(void)

{
  return;
}




undefined8 FUN_001019dd(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001020c6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102138(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001024ae(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010273e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
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




void FUN_00102cb8(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001026b2(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001029cf(void)

{
  return;
}




void FUN_00101856(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a8a(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(0x28);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001018b5 to 001018f2 has its CatchHandler @ 0010193e */
  FUN_00101b42(local_58,&local_60);
  FUN_00101b42(local_58,&local_60);
  FUN_00101b42(local_58,&local_60);
  FUN_00101b7c(local_38,local_58);
                    /* try { // try from 001018fa to 001018fe has its CatchHandler @ 00101929 */
  FUN_00101526(local_38);
  FUN_00101aaa(local_38);
  FUN_00101aaa(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102496(void)

{
  return 0x555555555555555;
}




void FUN_00102434(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102496(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00101da8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e42(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010211a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001029f0(void)

{
  return;
}




void FUN_0010268a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001019f4(undefined8 param_1)

{
  FUN_00101a14(param_1);
  return;
}




void FUN_00101c68(void)

{
  return;
}




void FUN_001022d5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f67(param_3);
  FUN_001023d2(param_1,param_2,uVar1);
  return;
}




void FUN_00102416(undefined8 param_1)

{
  FUN_00102484(param_1);
  return;
}




void FUN_001021a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f67(param_2);
  uVar2 = FUN_00101642(param_1);
  FUN_00101cf6(param_1,uVar2,uVar1);
  return;
}




void FUN_0010255a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102a74(void)

{
  return;
}




void FUN_00101a14(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102506(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102605(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001029fb(void)

{
  return;
}




void FUN_00102a5e(void)

{
  return;
}




void FUN_001026dd(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101af6(undefined8 param_1)

{
  FUN_00101c68(param_1);
  return;
}




undefined8 FUN_00101642(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016d4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102238(undefined8 param_1)

{
  FUN_00102391(param_1,1);
  return;
}




void FUN_00101469(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015e4(param_1);
  __ptr = (undefined4 *)*puVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  for (local_48 = 0; local_48 < 10; local_48 = local_48 + 1) {
    __ptr[local_48] = *(undefined4 *)((long)&local_38 + local_48 * 4);
  }
  FUN_00102506(*__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f7a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102238(param_1);
  uVar2 = FUN_00101efc(param_1);
  FUN_0010225c(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f67(param_2);
  uVar4 = FUN_001016f2(uVar1);
  FUN_001022d5(uVar2,uVar4,uVar3);
  FUN_00102312(local_38,0);
  FUN_00102296(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_0010209c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102334(param_1,param_2);
  return;
}




void FUN_0010211a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a32(void)

{
  return;
}




void FUN_00102a27(void)

{
  return;
}



