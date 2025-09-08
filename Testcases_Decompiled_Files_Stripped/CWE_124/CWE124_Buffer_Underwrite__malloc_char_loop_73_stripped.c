
undefined8 FUN_001020ce(undefined8 param_1,undefined8 param_2)

{
  FUN_001020fc(param_1,param_2);
  return param_1;
}




undefined8 FUN_001019d8(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010250e("Calling good()...");
  FUN_001019c8();
  FUN_0010250e("Finished good()");
  FUN_0010250e("Calling bad()...");
  FUN_00101752();
  FUN_0010250e("Finished bad()");
  return 0;
}




void FUN_00101d56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101fc7(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fda(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001020a4(param_1,1);
  return;
}




void FUN_00102432(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101fc7(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a3d(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101e1a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102126(param_2);
  FUN_00102138(param_1,uVar1);
  return;
}




void FUN_00102a5b(void)

{
  return;
}




undefined8 * FUN_001021be(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_00102b16(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102adf,local_18);
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




void FUN_00102265(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001023ca(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102c61(undefined8 *param_1)

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




void FUN_00101752(void)

{
  long in_FS_OFFSET;
  long local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aea(local_58);
  local_68 = 0;
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = (long)local_60 + -8;
                    /* try { // try from 001017dc to 00101819 has its CatchHandler @ 00101865 */
  FUN_00101ba2(local_58,&local_68);
  FUN_00101ba2(local_58,&local_68);
  FUN_00101ba2(local_58,&local_68);
  FUN_00101bdc(local_38,local_58);
                    /* try { // try from 00101821 to 00101825 has its CatchHandler @ 00101850 */
  FUN_00101489(local_38);
  FUN_00101b0a(local_38);
  FUN_00101b0a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016c0(undefined8 *param_1)

{
  FUN_00101700(*param_1);
  return;
}




int FUN_001029ff(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102494(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024f6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001016e2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102394(void)

{
  return;
}




void FUN_00102476(undefined8 param_1)

{
  FUN_001024e4(param_1);
  return;
}




void FUN_00101b0a(undefined8 param_1)

{
  FUN_00101b76(param_1);
  return;
}




void FUN_00102ac9(void)

{
  return;
}




void FUN_00102a9d(void)

{
  return;
}




void FUN_001023ca(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001025ba(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102dc0(void)

{
  return;
}




undefined8 FUN_00102126(undefined8 param_1)

{
  return param_1;
}




void FUN_00102abe(void)

{
  return;
}




void FUN_00101f98(undefined8 param_1,undefined8 param_2)

{
  FUN_00102265(param_1,param_2,1);
  return;
}




void FUN_00102a45(void)

{
  return;
}




void FUN_00101489(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_001015f2(param_1);
  lVar1 = *plVar2;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(lVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)(lVar1 + 99) = 0;
  FUN_0010250e(lVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001029f0(void)

{
  return 0;
}




void FUN_00101b2a(undefined8 param_1)

{
  FUN_00101ca8(param_1);
  FUN_00101a54(param_1);
  return;
}




void FUN_00102a19(void)

{
  return;
}




void FUN_001026ea(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




long * FUN_0010169c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_0010273d(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102a2f(void)

{
  return;
}




void FUN_0010153d(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_001015f2(param_1);
  lVar1 = *plVar2;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(lVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)(lVar1 + 99) = 0;
  FUN_0010250e(lVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101fc7(undefined8 param_1)

{
  return param_1;
}




void FUN_001019c8(void)

{
  FUN_0010188f();
  return;
}




void FUN_00101b76(undefined8 param_1)

{
  FUN_00101cd8(param_1);
  FUN_00101aaa(param_1);
  return;
}




void FUN_0010260f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102ad4(void)

{
  return;
}




void FUN_001023f1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102494(param_1,param_2,0);
  return;
}




void FUN_00101b56(undefined8 param_1)

{
  FUN_00101cc8(param_1);
  return;
}




void FUN_00101f6e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102252(param_1,param_2);
  return;
}




void FUN_00102cda(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101e52(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010217a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001024e4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101cd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101700(local_20);
    uVar3 = FUN_00101f5c(param_1);
    FUN_00101f6e(uVar3,uVar2);
    FUN_00101f98(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102a3a(void)

{
  return;
}




void FUN_00101cc8(void)

{
  return;
}




void FUN_00101ca8(undefined8 param_1)

{
  FUN_00101f4c(param_1);
  return;
}




undefined8 FUN_00101e08(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101740(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a74(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00102d18(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102665(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a66(void)

{
  return;
}




undefined8 FUN_0010241f(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00102902(long param_1,ulong param_2,long param_3)

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




void FUN_00101a54(undefined8 param_1)

{
  FUN_00101a74(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_0010188f(void)

{
  long in_FS_OFFSET;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aea(local_58);
  local_68 = (void *)0x0;
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = local_60;
                    /* try { // try from 00101915 to 00101952 has its CatchHandler @ 0010199e */
  FUN_00101ba2(local_58,&local_68);
  FUN_00101ba2(local_58,&local_68);
  FUN_00101ba2(local_58,&local_68);
  FUN_00101bdc(local_38,local_58);
                    /* try { // try from 0010195a to 0010195e has its CatchHandler @ 00101989 */
  FUN_0010153d(local_38);
  FUN_00101b0a(local_38);
  FUN_00101b0a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101eee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102198(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021e2(&local_18);
    FUN_00102204(local_10,uVar2);
    FUN_001021be(&local_18);
  }
  return;
}




void FUN_00101f4c(void)

{
  return;
}




void FUN_001015f2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101650(param_1);
  FUN_0010169c(&local_18);
  FUN_001016c0(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ba2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101650(param_1);
  FUN_00101d56(param_1,uVar1,param_2);
  return;
}




void FUN_001020a4(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102cf9(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102a87(void)

{
  return;
}




void FUN_00102d50(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102138(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102126(param_2);
  FUN_001020fc(param_1,uVar1);
  FUN_00101a54(param_1);
  return;
}




void FUN_00102a24(void)

{
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




undefined8 FUN_00101fda(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102298(param_1);
  uVar2 = FUN_00101f5c(param_1);
  FUN_001022bc(local_38,uVar2,uVar1);
  uVar3 = FUN_00101fc7(param_2);
  uVar4 = FUN_00101700(uVar1);
  FUN_00102335(uVar2,uVar4,uVar3);
  FUN_00102372(local_38,0);
  FUN_001022f6(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001022f6(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102265(*param_1,param_1[1],1);
  }
  return;
}




long FUN_00102372(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102252(void)

{
  return;
}




undefined8 FUN_00102c3e(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102534(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001022bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010241f(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102690(undefined4 param_1)

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




void FUN_00102a92(void)

{
  return;
}




void FUN_00101aaa(undefined8 param_1)

{
  FUN_00101b56(param_1);
  return;
}




undefined8 FUN_00102198(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102204(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101fc7(param_2);
  uVar2 = FUN_00101650(param_1);
  FUN_00101d56(param_1,uVar2,uVar1);
  return;
}




void FUN_0010258e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001029e1(void)

{
  return 1;
}




void FUN_0010279e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102a50(void)

{
  return;
}




undefined8 FUN_00101a3d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102566(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010250e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101ea2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010217a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101f5c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a71(void)

{
  return;
}




undefined8 FUN_00101650(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016e2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010276b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101aca(undefined8 param_1)

{
  FUN_00101b2a(param_1);
  return;
}




undefined8 FUN_00101db7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020ce(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001023a8(long param_1)

{
  FUN_00102476(param_1 + 0x10);
  return;
}




undefined8 FUN_001024f6(void)

{
  return 0x555555555555555;
}




void FUN_00102298(undefined8 param_1)

{
  FUN_001023f1(param_1,1);
  return;
}




void FUN_00101722(undefined8 param_1)

{
  FUN_00101740(param_1);
  return;
}




void FUN_0010263a(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




bool FUN_00102be3(pthread_t *param_1)

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




void FUN_00101aea(undefined8 param_1)

{
  FUN_00101aca(param_1);
  return;
}




void FUN_001025e4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102712(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102a7c(void)

{
  return;
}




void FUN_00102adf(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




ulong FUN_001027fe(long param_1,ulong param_2,long param_3)

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




void FUN_00101bdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101e08(param_2);
  FUN_00101db7(&local_21,uVar1);
  FUN_00101e1a(param_1,&local_21);
  FUN_00101b56(&local_21);
  uVar1 = FUN_00101ea2(param_2);
  uVar2 = FUN_00101e52(param_2);
                    /* try { // try from 00101c68 to 00101c6c has its CatchHandler @ 00101c6f */
  FUN_00101eee(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00102335(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fc7(param_3);
  FUN_00102432(param_1,param_2,uVar1);
  return;
}




void FUN_00101700(long param_1)

{
  FUN_00101722(param_1 + 0x10);
  return;
}




void FUN_001020fc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102394(param_1,param_2);
  return;
}




void FUN_0010217a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001021e2(undefined8 *param_1)

{
  FUN_001023a8(*param_1);
  return;
}




void FUN_00102ab3(void)

{
  return;
}




void FUN_00102aa8(void)

{
  return;
}



