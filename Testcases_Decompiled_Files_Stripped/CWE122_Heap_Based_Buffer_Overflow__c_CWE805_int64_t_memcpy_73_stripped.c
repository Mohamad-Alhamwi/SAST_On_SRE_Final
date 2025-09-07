
undefined8 FUN_00101d53(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010206a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101489(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015e0(param_1);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  memcpy(puVar1,local_338,800);
  FUN_001025ab(*puVar1);
  free(puVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a10(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001021a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f63(param_2);
  uVar2 = FUN_0010163e(param_1);
  FUN_00101cf2(param_1,uVar2,uVar1);
  return;
}




void FUN_00101a86(undefined8 param_1)

{
  FUN_00101a66(param_1);
  return;
}




void FUN_00102707(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101ee8(void)

{
  return;
}




void FUN_001029f7(void)

{
  return;
}




void FUN_00102a70(void)

{
  return;
}




undefined8 FUN_00101f63(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a18(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_001025ab(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102201(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102366(param_1,param_2,param_3);
  return;
}




void FUN_001020d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020c2(param_2);
  FUN_00102098(param_1,uVar1);
  FUN_001019f0(param_1);
  return;
}




void FUN_001021ee(void)

{
  return;
}




void FUN_001016ee(long param_1)

{
  FUN_00101710(param_1 + 0x10);
  return;
}




void FUN_001029d6(void)

{
  return;
}




int FUN_0010299b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102134(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102344(long param_1)

{
  FUN_00102412(param_1 + 0x10);
  return;
}




void FUN_00102a4f(void)

{
  return;
}




void FUN_00101db6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020c2(param_2);
  FUN_001020d4(param_1,uVar1);
  return;
}




void FUN_001029cb(void)

{
  return;
}




void FUN_00101c44(undefined8 param_1)

{
  FUN_00101ee8(param_1);
  return;
}




void FUN_001026ae(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102bda(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102580(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101710(undefined8 param_1)

{
  FUN_0010172e(param_1);
  return;
}




void FUN_001025d6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102c76(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102430(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102492(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00102492(void)

{
  return 0x555555555555555;
}




void FUN_0010262c(undefined4 param_1)

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




void FUN_00101c64(void)

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




void FUN_00102c95(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101740(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a86(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(400);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 0010179f to 001017dc has its CatchHandler @ 00101828 */
  FUN_00101b3e(local_58,&local_60);
  FUN_00101b3e(local_58,&local_60);
  FUN_00101b3e(local_58,&local_60);
  FUN_00101b78(local_38,local_58);
                    /* try { // try from 001017e4 to 001017e8 has its CatchHandler @ 00101813 */
  FUN_00101489(local_38);
  FUN_00101aa6(local_38);
  FUN_00101aa6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010238d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102430(param_1,param_2,0);
  return;
}




void FUN_001029e1(void)

{
  return;
}




undefined8 * FUN_0010215a(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_0010172e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101da4(param_2);
  FUN_00101d53(&local_21,uVar1);
  FUN_00101db6(param_1,&local_21);
  FUN_00101af2(&local_21);
  uVar1 = FUN_00101e3e(param_2);
  uVar2 = FUN_00101dee(param_2);
                    /* try { // try from 00101c04 to 00101c08 has its CatchHandler @ 00101c0b */
  FUN_00101e8a(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a23(void)

{
  return;
}




void FUN_00101aa6(undefined8 param_1)

{
  FUN_00101b12(param_1);
  return;
}




void FUN_00102234(undefined8 param_1)

{
  FUN_0010238d(param_1,1);
  return;
}




void FUN_001019f0(undefined8 param_1)

{
  FUN_00101a10(param_1);
  return;
}




void FUN_00102686(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001019d9(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101974(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024aa("Calling good()...");
  FUN_00101964();
  FUN_001024aa("Finished good()");
  FUN_001024aa("Calling bad()...");
  FUN_00101740();
  FUN_001024aa("Finished bad()");
  return 0;
}




void FUN_00101a66(undefined8 param_1)

{
  FUN_00101ac6(param_1);
  return;
}




undefined8 FUN_0010163e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016d0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a39(void)

{
  return;
}




void FUN_001023ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f63(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019d9(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010273a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010217e(undefined8 *param_1)

{
  FUN_00102344(*param_1);
  return;
}




void FUN_0010252a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001015e0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010163e(param_1);
  FUN_0010168a(&local_18);
  FUN_001016ae(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00101af2(undefined8 param_1)

{
  FUN_00101c64(param_1);
  return;
}




void FUN_00101b12(undefined8 param_1)

{
  FUN_00101c74(param_1);
  FUN_00101a46(param_1);
  return;
}




void FUN_00101852(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a86(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(800);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001018b1 to 001018ee has its CatchHandler @ 0010193a */
  FUN_00101b3e(local_58,&local_60);
  FUN_00101b3e(local_58,&local_60);
  FUN_00101b3e(local_58,&local_60);
  FUN_00101b78(local_38,local_58);
                    /* try { // try from 001018f6 to 001018fa has its CatchHandler @ 00101925 */
  FUN_00101534(local_38);
  FUN_00101aa6(local_38);
  FUN_00101aa6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cf2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f63(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f76(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102040(param_1,1);
  return;
}




void FUN_00102a2e(void)

{
  return;
}




undefined8 FUN_0010297d(void)

{
  return 1;
}




void FUN_00102a44(void)

{
  return;
}




undefined8 FUN_00101dee(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102116(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102601(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00101c74(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016ee(local_20);
    uVar3 = FUN_00101ef8(param_1);
    FUN_00101f0a(uVar3,uVar2);
    FUN_00101f34(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_0010206a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102098(param_1,param_2);
  return param_1;
}




undefined8 FUN_00102bfd(undefined8 *param_1)

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




undefined8 FUN_001020c2(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f34(undefined8 param_1,undefined8 param_2)

{
  FUN_00102201(param_1,param_2,1);
  return;
}




void FUN_00102a0d(void)

{
  return;
}




void FUN_001022d1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f63(param_3);
  FUN_001023ce(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102ab2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a7b,local_18);
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




void FUN_00102040(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102412(undefined8 param_1)

{
  FUN_00102480(param_1);
  return;
}




undefined8 FUN_0010298c(void)

{
  return 0;
}




long * FUN_0010168a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101e8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102134(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010217e(&local_18);
    FUN_001021a0(local_10,uVar2);
    FUN_0010215a(&local_18);
  }
  return;
}




void FUN_00101f0a(undefined8 param_1,undefined8 param_2)

{
  FUN_001021ee(param_1,param_2);
  return;
}




void FUN_00102330(void)

{
  return;
}




void FUN_00102556(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102a65(void)

{
  return;
}




void FUN_00102cb4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102d50(void)

{
  return;
}




void FUN_00102a5a(void)

{
  return;
}




void FUN_00102a7b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001024d0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001026d9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101534(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015e0(param_1);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  memcpy(puVar1,local_338,800);
  FUN_001025ab(*puVar1);
  free(puVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010230e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102292(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102201(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101ac6(undefined8 param_1)

{
  FUN_00101c44(param_1);
  FUN_001019f0(param_1);
  return;
}




void FUN_00101b3e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010163e(param_1);
  FUN_00101cf2(param_1,uVar1,param_2);
  return;
}




ulong FUN_0010279a(long param_1,ulong param_2,long param_3)

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




void FUN_001024aa(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001016ae(undefined8 *param_1)

{
  FUN_001016ee(*param_1);
  return;
}




void FUN_00102ce0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101a46(undefined8 param_1)

{
  FUN_00101af2(param_1);
  return;
}




void FUN_00102116(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102258(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023bb(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00101f76(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102234(param_1);
  uVar2 = FUN_00101ef8(param_1);
  FUN_00102258(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f63(param_2);
  uVar4 = FUN_001016ee(uVar1);
  FUN_001022d1(uVar2,uVar4,uVar3);
  FUN_0010230e(local_38,0);
  FUN_00102292(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_001023bb(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a02(void)

{
  return;
}




void FUN_001016d0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102366(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102480(undefined8 param_1)

{
  return param_1;
}




ulong FUN_0010289e(long param_1,ulong param_2,long param_3)

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




void FUN_001029ec(void)

{
  return;
}




void FUN_00102502(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101964(void)

{
  FUN_00101852();
  return;
}




void FUN_00102098(undefined8 param_1,undefined8 param_2)

{
  FUN_00102330(param_1,param_2);
  return;
}




undefined8 FUN_00101da4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e3e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102116(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101ef8(undefined8 param_1)

{
  return param_1;
}




void FUN_001029c0(void)

{
  return;
}




void FUN_001029b5(void)

{
  return;
}




bool FUN_00102b7f(pthread_t *param_1)

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



