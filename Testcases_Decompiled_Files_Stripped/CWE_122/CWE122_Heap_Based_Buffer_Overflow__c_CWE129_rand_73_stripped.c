
void FUN_0010201a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102326(param_2);
  FUN_00102338(param_1,uVar1);
  return;
}




undefined8 FUN_00101758(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017ea(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101cca(undefined8 param_1)

{
  FUN_00101d2a(param_1);
  return;
}




void FUN_00102465(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001025ca(param_1,param_2,param_3);
  return;
}




void FUN_00101d2a(undefined8 param_1)

{
  FUN_00101ea8(param_1);
  FUN_00101c54(param_1);
  return;
}




ulong FUN_001029fc(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010216e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102452(param_1,param_2);
  return;
}




void FUN_00102c6f(void)

{
  return;
}




undefined8 FUN_00102d14(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102cdd,local_18);
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




void FUN_001022a4(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102c90(void)

{
  return;
}




void FUN_00101541(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001016fa(param_1);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_0010270c("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102764(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00102863(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001024bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010261f(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00102398(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102498(undefined8 param_1)

{
  FUN_001025f1(param_1,1);
  return;
}




void FUN_0010185a(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cea(local_58);
  local_5c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_5c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_5c = rand();
    local_5c = local_5c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
                    /* try { // try from 001018e0 to 0010191d has its CatchHandler @ 00101969 */
  FUN_00101da2(local_58,&local_5c);
  FUN_00101da2(local_58,&local_5c);
  FUN_00101da2(local_58,&local_5c);
  FUN_00101ddc(local_38,local_58);
                    /* try { // try from 00101925 to 00101929 has its CatchHandler @ 00101954 */
  FUN_00101469(local_38);
  FUN_00101d0a(local_38);
  FUN_00101d0a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c4e(void)

{
  return;
}




void FUN_00102c22(void)

{
  return;
}




void FUN_001023e2(undefined8 *param_1)

{
  FUN_001025a8(*param_1);
  return;
}




void FUN_001025f1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102692(param_1,param_2,0);
  return;
}




void FUN_00102cc7(void)

{
  return;
}




undefined8 FUN_001020a2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010237a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c43(void)

{
  return;
}




void FUN_00101ed8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101808(local_20);
    uVar3 = FUN_0010215c(param_1);
    FUN_0010216e(uVar3,uVar2);
    FUN_00102198(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102969(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102ed8(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102838(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101993(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cea(local_58);
  local_5c = 7;
                    /* try { // try from 001019d7 to 00101a14 has its CatchHandler @ 00101a60 */
  FUN_00101da2(local_58,&local_5c);
  FUN_00101da2(local_58,&local_5c);
  FUN_00101da2(local_58,&local_5c);
  FUN_00101ddc(local_38,local_58);
                    /* try { // try from 00101a1c to 00101a20 has its CatchHandler @ 00101a4b */
  FUN_00101541(local_38);
  FUN_00101d0a(local_38);
  FUN_00101d0a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010288e(undefined4 param_1)

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




void FUN_00102f16(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001026f4(void)

{
  return 0x555555555555555;
}




void FUN_00102732(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102910(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101f56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001021c7(param_3);
  p_Var2 = (_List_node_base *)FUN_001021da(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001022a4(param_1,1);
  return;
}




void FUN_001016fa(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101758(param_1);
  FUN_001017a4(&local_18);
  FUN_001017c8(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f50(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101bc3(void)

{
  FUN_00101993();
  FUN_00101a8a();
  return;
}




void FUN_00102632(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_001021c7(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101c3d(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102c59(void)

{
  return;
}




void FUN_00102404(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021c7(param_2);
  uVar2 = FUN_00101758(param_1);
  FUN_00101f56(param_1,uVar2,uVar1);
  return;
}




void FUN_00101a8a(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cea(local_58);
  local_5c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_5c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_5c = rand();
    local_5c = local_5c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
                    /* try { // try from 00101b10 to 00101b4d has its CatchHandler @ 00101b99 */
  FUN_00101da2(local_58,&local_5c);
  FUN_00101da2(local_58,&local_5c);
  FUN_00101da2(local_58,&local_5c);
  FUN_00101ddc(local_38,local_58);
                    /* try { // try from 00101b55 to 00101b59 has its CatchHandler @ 00101b84 */
  FUN_00101619(local_38);
  FUN_00101d0a(local_38);
  FUN_00101d0a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ec8(void)

{
  return;
}




void FUN_00102c9b(void)

{
  return;
}




void FUN_00101d56(undefined8 param_1)

{
  FUN_00101ec8(param_1);
  return;
}




void FUN_001024f6(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102465(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101caa(undefined8 param_1)

{
  FUN_00101d56(param_1);
  return;
}




void FUN_0010293b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c74(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101c54(undefined8 param_1)

{
  FUN_00101c74(param_1);
  return;
}




void FUN_00101d0a(undefined8 param_1)

{
  FUN_00101d76(param_1);
  return;
}




void FUN_00101469(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001016fa(param_1);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_0010270c("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102764(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_001017ea(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00102cb1(void)

{
  return;
}




void FUN_00102692(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001026f4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




ulong FUN_00102b00(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102452(void)

{
  return;
}




void FUN_001027e2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001017c8(undefined8 *param_1)

{
  FUN_00101808(*param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00101619(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001016fa(param_1);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_0010270c("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102764(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101da2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101758(param_1);
  FUN_00101f56(param_1,uVar1,param_2);
  return;
}




void FUN_00101ddc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102008(param_2);
  FUN_00101fb7(&local_21,uVar1);
  FUN_0010201a(param_1,&local_21);
  FUN_00101d56(&local_21);
  uVar1 = FUN_001020a2(param_2);
  uVar2 = FUN_00102052(param_2);
                    /* try { // try from 00101e68 to 00101e6c has its CatchHandler @ 00101e6f */
  FUN_001020ee(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101bd8(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010270c("Calling good()...");
  FUN_00101bc3();
  FUN_0010270c("Finished good()");
  FUN_0010270c("Calling bad()...");
  FUN_0010185a();
  FUN_0010270c("Finished bad()");
  return 0;
}




undefined8 FUN_00102008(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ca6(void)

{
  return;
}




int FUN_00102bfd(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102cbc(void)

{
  return;
}




void FUN_001020ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102398(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001023e2(&local_18);
    FUN_00102404(local_10,uVar2);
    FUN_001023be(&local_18);
  }
  return;
}




void FUN_001028e8(uint param_1)

{
  printf("%u\n",(ulong)param_1);
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




undefined8 FUN_00101fb7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022ce(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102326(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ef7(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010237a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001021da(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102498(param_1);
  uVar2 = FUN_0010215c(param_1);
  FUN_001024bc(local_38,uVar2,uVar1);
  uVar3 = FUN_001021c7(param_2);
  uVar4 = FUN_00101808(uVar1);
  FUN_00102535(uVar2,uVar4,uVar3);
  FUN_00102572(local_38,0);
  FUN_001024f6(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102c85(void)

{
  return;
}




void FUN_00102594(void)

{
  return;
}




undefined8 FUN_00102e3c(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001022fc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102594(param_1,param_2);
  return;
}




undefined8 FUN_001026e2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c17(void)

{
  return;
}




void FUN_00101808(long param_1)

{
  FUN_0010182a(param_1 + 0x10);
  return;
}




undefined8 FUN_0010215c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001021c7(undefined8 param_1)

{
  return param_1;
}




void FUN_001025ca(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010280d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102cdd(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102fc0(void)

{
  return;
}




void FUN_00102cd2(void)

{
  return;
}




bool FUN_00102de1(pthread_t *param_1)

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




void FUN_0010278c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010299c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long * FUN_001017a4(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001025a8(long param_1)

{
  FUN_00102674(param_1 + 0x10);
  return;
}




long FUN_00102572(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101d76(undefined8 param_1)

{
  FUN_00101ed8(param_1);
  FUN_00101caa(param_1);
  return;
}




void FUN_00101ea8(undefined8 param_1)

{
  FUN_0010214c(param_1);
  return;
}




undefined8 FUN_00102bdf(void)

{
  return 1;
}




void FUN_00102764(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010182a(undefined8 param_1)

{
  FUN_00101848(param_1);
  return;
}




void FUN_00101cea(undefined8 param_1)

{
  FUN_00101cca(param_1);
  return;
}




undefined8 * FUN_001023be(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102535(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021c7(param_3);
  FUN_00102632(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001022ce(undefined8 param_1,undefined8 param_2)

{
  FUN_001022fc(param_1,param_2);
  return param_1;
}




void FUN_00102674(undefined8 param_1)

{
  FUN_001026e2(param_1);
  return;
}




void FUN_00102c7a(void)

{
  return;
}




undefined8 FUN_00101848(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010261f(undefined8 param_1)

{
  return param_1;
}




void FUN_0010270c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102bee(void)

{
  return 0;
}




void FUN_00102c64(void)

{
  return;
}




void FUN_001027b8(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101c3d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_00102338(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102326(param_2);
  FUN_001022fc(param_1,uVar1);
  FUN_00101c54(param_1);
  return;
}




undefined8 FUN_00102052(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010237a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010214c(void)

{
  return;
}




void FUN_00102198(undefined8 param_1,undefined8 param_2)

{
  FUN_00102465(param_1,param_2,1);
  return;
}




void FUN_00102c38(void)

{
  return;
}




void FUN_00102c2d(void)

{
  return;
}




undefined8 FUN_00102e5f(undefined8 *param_1)

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



