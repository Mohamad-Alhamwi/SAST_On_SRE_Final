
undefined8 FUN_00101e48(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001017cc(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024eb("Calling good()...");
  FUN_001017b7();
  FUN_001024eb("Finished good()");
  FUN_001024eb("Calling bad()...");
  FUN_00101469();
  FUN_001024eb("Finished bad()");
  return 0;
}




undefined8 FUN_00101b4a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e2a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102246(long param_1)

{
  FUN_00102326(param_1 + 0x10);
  return;
}




undefined8 FUN_00101c48(undefined8 param_1)

{
  return param_1;
}




ulong FUN_001027db(long param_1,ulong param_2,long param_3)

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




void FUN_00101fb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fa6(param_2);
  FUN_00101f7c(param_1,uVar1);
  FUN_00101848(param_1);
  return;
}




void FUN_00102a4e(void)

{
  return;
}




undefined8 FUN_00102af3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102abc,local_18);
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




void FUN_00102062(undefined8 *param_1)

{
  FUN_00102246(*param_1);
  return;
}




void FUN_00102a6f(void)

{
  return;
}




void FUN_00101587(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018de(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(400);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001015e6 to 00101623 has its CatchHandler @ 0010166f */
  FUN_00101996(local_58,&local_60);
  FUN_00101996(local_58,&local_60);
  FUN_00101996(local_58,&local_60);
  FUN_001019d0(local_38,local_58);
                    /* try { // try from 0010162b to 0010162f has its CatchHandler @ 0010165a */
  FUN_001023f0(local_38);
  FUN_001018fe(local_38);
  FUN_001018fe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102642(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010227a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010215a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022cf(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00102268(undefined8 param_1)

{
  return param_1;
}




void FUN_001018fe(undefined8 param_1)

{
  FUN_0010196a(param_1);
  return;
}




void FUN_00102a2d(void)

{
  return;
}




void FUN_00102a01(void)

{
  return;
}




void FUN_001021d3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e48(param_3);
  FUN_001022e2(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001023a6(void)

{
  return 0x555555555555555;
}




void FUN_00102aa6(void)

{
  return;
}




void FUN_00101f24(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102a22(void)

{
  return;
}




undefined8 FUN_00101dbe(undefined8 param_1)

{
  return param_1;
}




void FUN_00102748(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102cb7(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102617(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010191e(undefined8 param_1)

{
  FUN_00101a9c(param_1);
  FUN_00101848(param_1);
  return;
}




void FUN_0010266d(undefined4 param_1)

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




void FUN_00102cf5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001024ca(undefined8 *param_1)

{
  FUN_00101d9c(*param_1);
  return;
}




void FUN_00102511(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001026ef(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101dd0(undefined8 param_1,undefined8 param_2)

{
  FUN_001020f0(param_1,param_2);
  return;
}




void FUN_001017b7(void)

{
  FUN_00101587();
  FUN_00101699();
  return;
}




void FUN_00102d20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010196a(undefined8 param_1)

{
  FUN_00101acc(param_1);
  FUN_0010189e(param_1);
  return;
}




void FUN_001023f0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102448(param_1);
  free((void *)*puVar1);
  return;
}




void FUN_00102a38(void)

{
  return;
}




long FUN_00102210(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_0010194a(undefined8 param_1)

{
  FUN_00101abc(param_1);
  return;
}




void FUN_00101d9c(long param_1)

{
  FUN_001020d2(param_1 + 0x10);
  return;
}




void FUN_00102a7a(void)

{
  return;
}




void FUN_00101c5a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fa6(param_2);
  FUN_00101fb8(param_1,uVar1);
  return;
}




void FUN_001022a1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102344(param_1,param_2,0);
  return;
}




void FUN_00101acc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101d9c(local_20);
    uVar3 = FUN_00101dbe(param_1);
    FUN_00101dd0(uVar3,uVar2);
    FUN_00101dfa(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_0010271a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101abc(void)

{
  return;
}




void FUN_00101a9c(undefined8 param_1)

{
  FUN_00101d8c(param_1);
  return;
}




undefined8 FUN_00101bf7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f4e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101469(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018de(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(400);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_60);
                    /* try { // try from 001014d4 to 00101511 has its CatchHandler @ 0010155d */
  FUN_00101996(local_58,&local_60);
  FUN_00101996(local_58,&local_60);
  FUN_00101996(local_58,&local_60);
  FUN_001019d0(local_38,local_58);
                    /* try { // try from 00101519 to 0010151d has its CatchHandler @ 00101548 */
  FUN_001023be(local_38);
  FUN_001018fe(local_38);
  FUN_001018fe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101868(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00102a90(void)

{
  return;
}




void FUN_00102448(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101b4a(param_1);
  FUN_001024a6(&local_18);
  FUN_001024ca(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001028df(long param_1,ulong param_2,long param_3)

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




void FUN_00102232(void)

{
  return;
}




void FUN_001025c1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101848(undefined8 param_1)

{
  FUN_00101868(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00101699(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018de(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(400);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_60);
                    /* try { // try from 00101704 to 00101741 has its CatchHandler @ 0010178d */
  FUN_00101996(local_58,&local_60);
  FUN_00101996(local_58,&local_60);
  FUN_00101996(local_58,&local_60);
  FUN_001019d0(local_38,local_58);
                    /* try { // try from 00101749 to 0010174d has its CatchHandler @ 00101778 */
  FUN_00102422(local_38);
  FUN_001018fe(local_38);
  FUN_001018fe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101ce2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ffa(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102018(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102062(&local_18);
    FUN_00102084(local_10,uVar2);
    FUN_0010203e(&local_18);
  }
  return;
}




void FUN_00101996(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b4a(param_1);
  FUN_00101b96(param_1,uVar1,param_2);
  return;
}




void FUN_00101e2a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a85(void)

{
  return;
}




int FUN_001029dc(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102a9b(void)

{
  return;
}




undefined8 FUN_00101f4e(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f7c(param_1,param_2);
  return param_1;
}




void FUN_001026c7(uint param_1)

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




void FUN_00101dfa(undefined8 param_1,undefined8 param_2)

{
  FUN_00102103(param_1,param_2,1);
  return;
}




void FUN_001020f0(void)

{
  return;
}




void FUN_00102cd6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102136(undefined8 param_1)

{
  FUN_001022a1(param_1,1);
  return;
}




undefined8 * FUN_0010203e(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102a64(void)

{
  return;
}




void FUN_00102326(undefined8 param_1)

{
  FUN_00102394(param_1);
  return;
}




undefined8 FUN_00102c1b(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001020d2(undefined8 param_1)

{
  FUN_00102268(param_1);
  return;
}




long * FUN_001024a6(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001029f6(void)

{
  return;
}




void FUN_0010189e(undefined8 param_1)

{
  FUN_0010194a(param_1);
  return;
}




undefined8 FUN_00101fa6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102018(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_00102394(undefined8 param_1)

{
  return param_1;
}




void FUN_001025ec(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102abc(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102d90(void)

{
  return;
}




void FUN_00102ab1(void)

{
  return;
}




bool FUN_00102bc0(pthread_t *param_1)

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




void FUN_0010256b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010277b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101831(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102344(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001023a6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001022e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101e48(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101831(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00101c92(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ffa(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d8c(void)

{
  return;
}




undefined8 FUN_001029be(void)

{
  return 1;
}




void FUN_00102543(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001018be(undefined8 param_1)

{
  FUN_0010191e(param_1);
  return;
}




void FUN_00101b96(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e48(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e5a(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f24(param_1,1);
  return;
}




void FUN_00102194(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102103(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_001022cf(undefined8 param_1)

{
  return param_1;
}




void FUN_00102084(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e48(param_2);
  uVar2 = FUN_00101b4a(param_1);
  FUN_00101b96(param_1,uVar2,uVar1);
  return;
}




void FUN_00102422(undefined8 param_1)

{
  FUN_00102448(param_1);
  return;
}




void FUN_00102a59(void)

{
  return;
}




void FUN_001018de(undefined8 param_1)

{
  FUN_001018be(param_1);
  return;
}




void FUN_001023be(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102448(param_1);
  free((void *)*puVar1);
  return;
}




void FUN_001024eb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001029cd(void)

{
  return 0;
}




void FUN_00102a43(void)

{
  return;
}




void FUN_00102597(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001019d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101c48(param_2);
  FUN_00101bf7(&local_21,uVar1);
  FUN_00101c5a(param_1,&local_21);
  FUN_0010194a(&local_21);
  uVar1 = FUN_00101ce2(param_2);
  uVar2 = FUN_00101c92(param_2);
                    /* try { // try from 00101a5c to 00101a60 has its CatchHandler @ 00101a63 */
  FUN_00101d2e(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_00102103(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010227a(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101e5a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102136(param_1);
  uVar2 = FUN_00101dbe(param_1);
  FUN_0010215a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e48(param_2);
  uVar4 = FUN_00101d9c(uVar1);
  FUN_001021d3(uVar2,uVar4,uVar3);
  FUN_00102210(local_38,0);
  FUN_00102194(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101f7c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102232(param_1,param_2);
  return;
}




void FUN_00101ffa(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a17(void)

{
  return;
}




void FUN_00102a0c(void)

{
  return;
}




undefined8 FUN_00102c3e(undefined8 *param_1)

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



