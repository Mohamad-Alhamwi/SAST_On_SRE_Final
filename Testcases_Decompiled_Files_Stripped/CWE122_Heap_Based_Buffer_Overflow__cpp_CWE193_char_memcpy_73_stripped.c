
undefined8 FUN_00101b52(undefined8 param_1)

{
  return param_1;
}




void FUN_001017c8(undefined8 param_1)

{
  FUN_00101828(param_1);
  return;
}




void FUN_00101f6c(undefined8 *param_1)

{
  FUN_00102150(*param_1);
  return;
}




void FUN_00101828(undefined8 param_1)

{
  FUN_001019a6(param_1);
  FUN_00101752(param_1);
  return;
}




void FUN_00102587(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ca6(long param_1)

{
  FUN_00101fdc(param_1 + 0x10);
  return;
}




undefined8 FUN_00102993(void)

{
  return 0;
}




void FUN_00102a1f(void)

{
  return;
}




void FUN_00101d34(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001029c7(void)

{
  return;
}




void FUN_00102d60(void)

{
  return;
}




void FUN_00102c7d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




long * FUN_0010246c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101fdc(undefined8 param_1)

{
  FUN_00102172(param_1);
  return;
}




undefined8 FUN_00101eb0(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f8e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d52(param_2);
  uVar2 = FUN_00101a54(param_1);
  FUN_00101aa0(param_1,uVar2,uVar1);
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




ulong FUN_001027a1(long param_1,ulong param_2,long param_3)

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




void FUN_001026b5(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101f04(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_0010211a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001029fe(void)

{
  return;
}




undefined8 FUN_00101b9c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f04(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102741(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001019d6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101ca6(local_20);
    uVar3 = FUN_00101cc8(param_1);
    FUN_00101cda(uVar3,uVar2);
    FUN_00101d04(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102531(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a4b(void)

{
  return;
}




void FUN_0010240e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101a54(param_1);
  FUN_0010246c(&local_18);
  FUN_00102490(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001014c9(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017e8(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001014fe to 00101552 has its CatchHandler @ 0010159e */
  local_60 = operator_new__(10);
  FUN_001018a0(local_58,&local_60);
  FUN_001018a0(local_58,&local_60);
  FUN_001018a0(local_58,&local_60);
  FUN_001018da(local_38,local_58);
                    /* try { // try from 0010155a to 0010155e has its CatchHandler @ 00101589 */
  FUN_001022c8(local_38);
  FUN_00101808(local_38);
  FUN_00101808(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102490(undefined8 *param_1)

{
  FUN_00101ca6(*param_1);
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




void FUN_00102a61(void)

{
  return;
}




undefined8 FUN_001021d9(undefined8 param_1)

{
  return param_1;
}




void FUN_00102230(undefined8 param_1)

{
  FUN_0010229e(param_1);
  return;
}




void FUN_001024d7(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101a54(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d34(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a6c(void)

{
  return;
}




void FUN_001016c7(void)

{
  FUN_001015c8();
  return;
}




void FUN_00102150(long param_1)

{
  FUN_00102230(param_1 + 0x10);
  return;
}




ulong FUN_001028a5(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101f22(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001015c8(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017e8(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001015fd to 00101651 has its CatchHandler @ 0010169d */
  local_60 = operator_new__(0xb);
  FUN_001018a0(local_58,&local_60);
  FUN_001018a0(local_58,&local_60);
  FUN_001018a0(local_58,&local_60);
  FUN_001018da(local_38,local_58);
                    /* try { // try from 00101659 to 0010165d has its CatchHandler @ 00101688 */
  FUN_0010236b(local_38);
  FUN_00101808(local_38);
  FUN_00101808(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001019c6(void)

{
  return;
}




undefined8 FUN_00102be1(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001029d2(void)

{
  return;
}




bool FUN_00102b86(pthread_t *param_1)

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




void FUN_00101854(undefined8 param_1)

{
  FUN_001019c6(param_1);
  return;
}




void FUN_00101ffa(void)

{
  return;
}




void FUN_001017a8(undefined8 param_1)

{
  FUN_00101854(param_1);
  return;
}




void FUN_00102509(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101772(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101752(undefined8 param_1)

{
  FUN_00101772(param_1);
  return;
}




void FUN_00101808(undefined8 param_1)

{
  FUN_00101874(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ee8)();
  return;
}




undefined8 FUN_00102c04(undefined8 *param_1)

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




void FUN_001029e8(void)

{
  return;
}




void FUN_00102184(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001025b2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 * FUN_00101f48(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001022c8(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010240e(param_1);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memcpy(__dest,local_1b,sVar2 + 1);
  FUN_001024b1(__dest);
  if (__dest != (void *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c9c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001018a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101a54(param_1);
  FUN_00101aa0(param_1,uVar1,param_2);
  return;
}




void FUN_001018da(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101b52(param_2);
  FUN_00101b01(&local_21,uVar1);
  FUN_00101b64(param_1,&local_21);
  FUN_00101854(&local_21);
  uVar1 = FUN_00101bec(param_2);
  uVar2 = FUN_00101b9c(param_2);
                    /* try { // try from 00101966 to 0010196a has its CatchHandler @ 0010196d */
  FUN_00101c38(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001016d7(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024b1("Calling good()...");
  FUN_001016c7();
  FUN_001024b1("Finished good()");
  FUN_001024b1("Calling bad()...");
  FUN_001014c9();
  FUN_001024b1("Finished bad()");
  return 0;
}




undefined8 FUN_00101b01(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e58(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001029dd(void)

{
  return;
}




void FUN_00102633(undefined4 param_1)

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




void FUN_001029f3(void)

{
  return;
}




undefined8 FUN_00101bec(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f04(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024b1(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102a56(void)

{
  return;
}




void FUN_00101aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101d52(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d64(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101e2e(param_1,1);
  return;
}




void FUN_00101e2e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101e86(undefined8 param_1,undefined8 param_2)

{
  FUN_0010213c(param_1,param_2);
  return;
}




void FUN_00101d04(undefined8 param_1,undefined8 param_2)

{
  FUN_0010200d(param_1,param_2,1);
  return;
}




void FUN_001029bc(void)

{
  return;
}




void FUN_00102064(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021d9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102a35(void)

{
  return;
}




undefined8 FUN_00101d64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102040(param_1);
  uVar2 = FUN_00101cc8(param_1);
  FUN_00102064(local_38,uVar2,uVar1);
  uVar3 = FUN_00101d52(param_2);
  uVar4 = FUN_00101ca6(uVar1);
  FUN_001020dd(uVar2,uVar4,uVar3);
  FUN_0010211a(local_38,0);
  FUN_0010209e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001021ab(undefined8 param_1,undefined8 param_2)

{
  FUN_0010224e(param_1,param_2,0);
  return;
}




void FUN_0010268d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c96(void)

{
  return;
}




void FUN_00101cda(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ffa(param_1,param_2);
  return;
}




void FUN_001020dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d52(param_3);
  FUN_001021ec(param_1,param_2,uVar1);
  return;
}




void FUN_0010236b(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010240e(param_1);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memcpy(__dest,local_1b,sVar2 + 1);
  FUN_001024b1(__dest);
  if (__dest != (void *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a14(void)

{
  return;
}




void FUN_00102a77(void)

{
  return;
}




undefined8 FUN_00102ab9(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a82,local_18);
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




void FUN_00102a09(void)

{
  return;
}




void FUN_00102a2a(void)

{
  return;
}




undefined8 FUN_0010229e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010255d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102cbb(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010209e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010200d(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102040(undefined8 param_1)

{
  FUN_001021ab(param_1,1);
  return;
}




void FUN_00101874(undefined8 param_1)

{
  FUN_001019d6(param_1);
  FUN_001017a8(param_1);
  return;
}




void FUN_001019a6(undefined8 param_1)

{
  FUN_00101c96(param_1);
  return;
}




void FUN_001025dd(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010224e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001022b0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00102a82(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001017e8(undefined8 param_1)

{
  FUN_001017c8(param_1);
  return;
}




void FUN_00101ec2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101eb0(param_2);
  FUN_00101e86(param_1,uVar1);
  FUN_00101752(param_1);
  return;
}




void FUN_0010200d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102184(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101d52(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102172(undefined8 param_1)

{
  return param_1;
}




int FUN_001029a2(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_0010213c(void)

{
  return;
}




void FUN_001021ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101d52(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010173c(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102608(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102984(void)

{
  return 1;
}




undefined8 FUN_001022b0(void)

{
  return 0x555555555555555;
}




undefined8 FUN_0010173c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101e58(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e86(param_1,param_2);
  return param_1;
}




void FUN_00101b64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101eb0(param_2);
  FUN_00101ec2(param_1,uVar1);
  return;
}




void FUN_00101c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101f22(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101f6c(&local_18);
    FUN_00101f8e(local_10,uVar2);
    FUN_00101f48(&local_18);
  }
  return;
}




undefined8 FUN_00101cc8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010270e(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001026e0(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102a40(void)

{
  return;
}



