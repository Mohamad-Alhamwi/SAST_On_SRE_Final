
void FUN_00101b78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ec4(param_2);
  FUN_00101ed6(param_1,uVar1);
  return;
}




void FUN_001017fc(undefined8 param_1)

{
  FUN_001017dc(param_1);
  return;
}




void FUN_00101fa2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d66(param_2);
  uVar2 = FUN_00101a68(param_1);
  FUN_00101ab4(param_1,uVar2,uVar1);
  return;
}




void FUN_00101868(undefined8 param_1)

{
  FUN_001019da(param_1);
  return;
}




void FUN_001025d0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101cdc(undefined8 param_1)

{
  return param_1;
}




int FUN_001029c0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102a48(void)

{
  return;
}




undefined8 FUN_00101d66(undefined8 param_1)

{
  return param_1;
}




void FUN_001029f0(void)

{
  return;
}




void FUN_00102cba(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001024ae(undefined8 *param_1)

{
  FUN_00101cba(*param_1);
  return;
}




void FUN_0010200e(void)

{
  return;
}




void FUN_00101ed6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ec4(param_2);
  FUN_00101e9a(param_1,uVar1);
  FUN_00101766(param_1);
  return;
}




void FUN_00101ff0(undefined8 param_1)

{
  FUN_00102186(param_1);
  return;
}




void FUN_001014a9(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017fc(local_58);
  local_60 = (undefined *)0x0;
  local_60 = (undefined *)malloc(0x32);
  if (local_60 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 0;
                    /* try { // try from 0010150f to 0010154c has its CatchHandler @ 00101598 */
  FUN_001018b4(local_58,&local_60);
  FUN_001018b4(local_58,&local_60);
  FUN_001018b4(local_58,&local_60);
  FUN_001018ee(local_38,local_58);
                    /* try { // try from 00101554 to 00101558 has its CatchHandler @ 00101583 */
  FUN_001022dc(local_38);
  FUN_0010181c(local_38);
  FUN_0010181c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001028c3(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010309c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001026fe(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101f36(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102150(void)

{
  return;
}




void FUN_00102a27(void)

{
  return;
}




undefined8 FUN_00101c00(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f18(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_001027bf(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101a68(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d48(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010257b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102a74(void)

{
  return;
}




long * FUN_0010248a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001015c2(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017fc(local_58);
  local_60 = (undefined *)0x0;
  local_60 = (undefined *)malloc(100);
  if (local_60 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 0;
                    /* try { // try from 00101628 to 00101665 has its CatchHandler @ 001016b1 */
  FUN_001018b4(local_58,&local_60);
  FUN_001018b4(local_58,&local_60);
  FUN_001018b4(local_58,&local_60);
  FUN_001018ee(local_38,local_58);
                    /* try { // try from 0010166d to 00101671 has its CatchHandler @ 0010169c */
  FUN_00102384(local_38);
  FUN_0010181c(local_38);
  FUN_0010181c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001024cf(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102d80(void)

{
  return;
}




void FUN_00102a8a(void)

{
  return;
}




void FUN_00102200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101d66(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101750(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102262(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001022c4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102527(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101d66(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d78(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101e42(param_1,1);
  return;
}




void FUN_00102a95(void)

{
  return;
}




undefined8 FUN_001016eb(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024cf("Calling good()...");
  FUN_001016db();
  FUN_001024cf("Finished good()");
  FUN_001024cf("Calling bad()...");
  FUN_001014a9();
  FUN_001024cf("Finished bad()");
  return 0;
}




undefined8 FUN_00102186(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001029a2(void)

{
  return 1;
}




undefined8 * FUN_00101f5c(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001016db(void)

{
  FUN_001015c2();
  return;
}




void FUN_001019ea(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101cba(local_20);
    uVar3 = FUN_00101cdc(param_1);
    FUN_00101cee(uVar3,uVar2);
    FUN_00101d18(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00102c22(undefined8 *param_1)

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




void FUN_001029fb(void)

{
  return;
}




undefined8 FUN_00102bff(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101888(undefined8 param_1)

{
  FUN_001019ea(param_1);
  FUN_001017bc(param_1);
  return;
}




void FUN_00102021(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102198(param_1,param_2,param_3);
  return;
}




void FUN_001017dc(undefined8 param_1)

{
  FUN_0010183c(param_1);
  return;
}




void FUN_0010254f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001017bc(undefined8 param_1)

{
  FUN_00101868(param_1);
  return;
}




void FUN_00101786(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_0010183c(undefined8 param_1)

{
  FUN_001019ba(param_1);
  FUN_00101766(param_1);
  return;
}




void FUN_00102c9b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102a11(void)

{
  return;
}




void FUN_001021bf(undefined8 param_1,undefined8 param_2)

{
  FUN_00102262(param_1,param_2,0);
  return;
}




void FUN_001025fb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101f80(undefined8 *param_1)

{
  FUN_00102164(*param_1);
  return;
}




void FUN_00102384(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010242c(param_1);
  __s = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(__s,100,"%s",local_78);
  FUN_001024cf(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




void FUN_00102cd9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001018ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101b66(param_2);
  FUN_00101b15(&local_21,uVar1);
  FUN_00101b78(param_1,&local_21);
  FUN_00101868(&local_21);
  uVar1 = FUN_00101c00(param_2);
  uVar2 = FUN_00101bb0(param_2);
                    /* try { // try from 0010197a to 0010197e has its CatchHandler @ 00101981 */
  FUN_00101c4c(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001019ba(undefined8 param_1)

{
  FUN_00101caa(param_1);
  return;
}




undefined8 FUN_00101750(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101b66(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a06(void)

{
  return;
}




void FUN_001026ab(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102a1c(void)

{
  return;
}




void FUN_00101c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101f36(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101f80(&local_18);
    FUN_00101fa2(local_10,uVar2);
    FUN_00101f5c(&local_18);
  }
  return;
}




void FUN_001024f5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102a7f(void)

{
  return;
}




undefined8 FUN_00101b15(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e6c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101e6c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e9a(param_1,param_2);
  return param_1;
}




undefined8 FUN_00101ec4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d48(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001029e5(void)

{
  return;
}




void FUN_001020b2(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102021(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102a5e(void)

{
  return;
}




void FUN_00101e42(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_001021ed(undefined8 param_1)

{
  return param_1;
}




void FUN_001026d3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00101cba(long param_1)

{
  FUN_00101ff0(param_1 + 0x10);
  return;
}




void FUN_00101d18(undefined8 param_1,undefined8 param_2)

{
  FUN_00102021(param_1,param_2,1);
  return;
}




long FUN_0010212e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_0010242c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101a68(param_1);
  FUN_0010248a(&local_18);
  FUN_001024ae(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a3d(void)

{
  return;
}




void FUN_00102aa0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_00102ba4(pthread_t *param_1)

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




void FUN_00102a32(void)

{
  return;
}




void FUN_00102a53(void)

{
  return;
}




undefined8 FUN_001022c4(void)

{
  return 0x555555555555555;
}




void FUN_001025a5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102d10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001020f1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d66(param_3);
  FUN_00102200(param_1,param_2,uVar1);
  return;
}




void FUN_00102078(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021ed(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001018b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101a68(param_1);
  FUN_00101ab4(param_1,uVar1,param_2);
  return;
}




void FUN_001019da(void)

{
  return;
}




void FUN_00102626(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001022b2(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




undefined8 FUN_00102ad7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102aa0,local_18);
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




void FUN_0010181c(undefined8 param_1)

{
  FUN_00101888(param_1);
  return;
}




void FUN_00101f18(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102054(undefined8 param_1)

{
  FUN_001021bf(param_1,1);
  return;
}




undefined8 FUN_00101d78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102054(param_1);
  uVar2 = FUN_00101cdc(param_1);
  FUN_00102078(local_38,uVar2,uVar1);
  uVar3 = FUN_00101d66(param_2);
  uVar4 = FUN_00101cba(uVar1);
  FUN_001020f1(uVar2,uVar4,uVar3);
  FUN_0010212e(local_38,0);
  FUN_001020b2(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102198(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001029da(void)

{
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




void FUN_00102164(long param_1)

{
  FUN_00102244(param_1 + 0x10);
  return;
}




void FUN_00102244(undefined8 param_1)

{
  FUN_001022b2(param_1);
  return;
}




void FUN_00102651(undefined4 param_1)

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




undefined8 FUN_001029b1(void)

{
  return 0;
}




void FUN_001022dc(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010242c(param_1);
  __s = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(__s,100,"%s",local_78);
  FUN_001024cf(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101766(undefined8 param_1)

{
  FUN_00101786(param_1);
  return;
}




void FUN_00101e9a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102150(param_1,param_2);
  return;
}




undefined8 FUN_00101bb0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f18(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101caa(void)

{
  return;
}




void FUN_00101cee(undefined8 param_1,undefined8 param_2)

{
  FUN_0010200e(param_1,param_2);
  return;
}




void FUN_0010275f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010272c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102a69(void)

{
  return;
}



