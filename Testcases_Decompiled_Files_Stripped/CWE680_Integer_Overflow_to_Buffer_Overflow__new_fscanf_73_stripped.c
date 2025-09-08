
void FUN_00101732(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a5a(local_58);
  local_5c = 0xffffffff;
                    /* try { // try from 0010177b to 001017cb has its CatchHandler @ 00101817 */
  __isoc99_fscanf(stdin,&DAT_00103006,&local_5c);
  FUN_00101b12(local_58,&local_5c);
  FUN_00101b12(local_58,&local_5c);
  FUN_00101b12(local_58,&local_5c);
  FUN_00101b4c(local_38,local_58);
                    /* try { // try from 001017d3 to 001017d7 has its CatchHandler @ 00101802 */
  FUN_001014a9(local_38);
  FUN_00101a7a(local_38);
  FUN_00101a7a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101d78(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00106028 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013f0();
    DAT_00106028 = 1;
    return;
  }
  return;
}




void FUN_00102361(undefined8 param_1,undefined8 param_2)

{
  FUN_00102402(param_1,param_2,0);
  return;
}




void FUN_001019e4(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_0010257d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010294f(void)

{
  return 1;
}




void FUN_00102a37(void)

{
  return;
}




undefined8 FUN_00102a84(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a4d,local_18);
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




void FUN_00101a7a(undefined8 param_1)

{
  FUN_00101ae6(param_1);
  return;
}




void FUN_001025fe(undefined4 param_1)

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




void FUN_00102a2c(void)

{
  return;
}




void FUN_00102a00(void)

{
  return;
}




void FUN_0010222c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010238f(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00101dc2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020ea(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c18(undefined8 param_1)

{
  FUN_00101ebc(param_1);
  return;
}




void FUN_00101d8a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102096(param_2);
  FUN_001020a8(param_1,uVar1);
  return;
}




void FUN_001024fc(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102464(void)

{
  return 0x555555555555555;
}




void FUN_00101c48(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016e0(local_20);
    uVar3 = FUN_00101ecc(param_1);
    FUN_00101ede(uVar3,uVar2);
    FUN_00101f08(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00101f37(undefined8 param_1)

{
  return param_1;
}




void FUN_0010270c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101938(void)

{
  FUN_00101841();
  return;
}




void FUN_001024d4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001016c2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102318(long param_1)

{
  FUN_001023e4(param_1 + 0x10);
  return;
}




void FUN_00102992(void)

{
  return;
}




void FUN_00102208(undefined8 param_1)

{
  FUN_00102361(param_1,1);
  return;
}




void FUN_00102266(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001021d5(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102a21(void)

{
  return;
}




void FUN_00102a42(void)

{
  return;
}




void FUN_001029a8(void)

{
  return;
}




void FUN_001020a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102096(param_2);
  FUN_0010206c(param_1,uVar1);
  FUN_001019c4(param_1);
  return;
}




undefined8 FUN_00102108(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




long FUN_001022e2(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001016e0(long param_1)

{
  FUN_00101702(param_1 + 0x10);
  return;
}




void FUN_001029b3(void)

{
  return;
}




void FUN_00102c48(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102014(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102bcf(undefined8 *param_1)

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




void FUN_00102528(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101cc6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f37(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f4a(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102014(param_1,1);
  return;
}




void FUN_001016a0(undefined8 *param_1)

{
  FUN_001016e0(*param_1);
  return;
}




void FUN_001029ea(void)

{
  return;
}




void FUN_00102658(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001029df(void)

{
  return;
}




void FUN_001014a9(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_001015d2(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_001024d4(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




undefined8 FUN_00101e12(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020ea(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




void FUN_00102304(void)

{
  return;
}




void FUN_00102c86(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_001029f5(void)

{
  return;
}




void FUN_001026ab(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010206c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102304(param_1,param_2);
  return;
}




undefined8 FUN_0010238f(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d27(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010203e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001021c2(void)

{
  return;
}




void FUN_00102a0b(void)

{
  return;
}




void FUN_001015d2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101630(param_1);
  FUN_0010167c(&local_18);
  FUN_001016a0(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101630(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016c2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c67(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101720(undefined8 param_1)

{
  return param_1;
}




void FUN_00102680(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102402(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102464(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001026d9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101948(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010247c("Calling good()...");
  FUN_00101938();
  FUN_0010247c("Finished good()");
  FUN_0010247c("Calling bad()...");
  FUN_00101732();
  FUN_0010247c("Finished bad()");
  return 0;
}




void FUN_001022a5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f37(param_3);
  FUN_001023a2(param_1,param_2,uVar1);
  return;
}




void FUN_0010299d(void)

{
  return;
}




void FUN_00101702(undefined8 param_1)

{
  FUN_00101720(param_1);
  return;
}




void FUN_00101ae6(undefined8 param_1)

{
  FUN_00101c48(param_1);
  FUN_00101a1a(param_1);
  return;
}




void FUN_00101b4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101d78(param_2);
  FUN_00101d27(&local_21,uVar1);
  FUN_00101d8a(param_1,&local_21);
  FUN_00101ac6(&local_21);
  uVar1 = FUN_00101e12(param_2);
  uVar2 = FUN_00101dc2(param_2);
                    /* try { // try from 00101bd8 to 00101bdc has its CatchHandler @ 00101bdf */
  FUN_00101e5e(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a5a(undefined8 param_1)

{
  FUN_00101a3a(param_1);
  return;
}




void FUN_001025d3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101ecc(undefined8 param_1)

{
  return param_1;
}




int FUN_0010296d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




bool FUN_00102b51(pthread_t *param_1)

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




void FUN_00101ac6(undefined8 param_1)

{
  FUN_00101c38(param_1);
  return;
}




undefined8 FUN_00102096(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102bac(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102452(undefined8 param_1)

{
  return param_1;
}




void FUN_001019c4(undefined8 param_1)

{
  FUN_001019e4(param_1);
  return;
}




void FUN_00101a3a(undefined8 param_1)

{
  FUN_00101a9a(param_1);
  return;
}




void FUN_00101f08(undefined8 param_1,undefined8 param_2)

{
  FUN_001021d5(param_1,param_2,1);
  return;
}




void FUN_001021d5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010233a(param_1,param_2,param_3);
  return;
}




ulong FUN_00102870(long param_1,ulong param_2,long param_3)

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




void FUN_001029be(void)

{
  return;
}




void FUN_001029d4(void)

{
  return;
}




ulong FUN_0010276c(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_0010295e(void)

{
  return 0;
}




void FUN_00102152(undefined8 *param_1)

{
  FUN_00102318(*param_1);
  return;
}




void FUN_0010233a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102a16(void)

{
  return;
}




void FUN_00101ede(undefined8 param_1,undefined8 param_2)

{
  FUN_001021c2(param_1,param_2);
  return;
}




void FUN_00101ebc(void)

{
  return;
}




void FUN_0010153d(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_001015d2(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_001024d4(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




long * FUN_0010167c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001023a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00101f37(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_001019ad(4,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 * FUN_0010212e(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001029c9(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00101c38(void)

{
  return;
}




void FUN_00101e5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102108(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102152(&local_18);
    FUN_00102174(local_10,uVar2);
    FUN_0010212e(&local_18);
  }
  return;
}




void FUN_00101a9a(undefined8 param_1)

{
  FUN_00101c18(param_1);
  FUN_001019c4(param_1);
  return;
}




undefined8 FUN_0010203e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010206c(param_1,param_2);
  return param_1;
}




void FUN_001025a8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102d30(void)

{
  return;
}




undefined8 FUN_00101f4a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102208(param_1);
  uVar2 = FUN_00101ecc(param_1);
  FUN_0010222c(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f37(param_2);
  uVar4 = FUN_001016e0(uVar1);
  FUN_001022a5(uVar2,uVar4,uVar3);
  FUN_001022e2(local_38,0);
  FUN_00102266(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001020ea(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001023e4(undefined8 param_1)

{
  FUN_00102452(param_1);
  return;
}




void FUN_00102552(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a4d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102174(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f37(param_2);
  uVar2 = FUN_00101630(param_1);
  FUN_00101cc6(param_1,uVar2,uVar1);
  return;
}




void FUN_00101b12(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101630(param_1);
  FUN_00101cc6(param_1,uVar1,param_2);
  return;
}




void FUN_00102cc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101841(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a5a(local_58);
  local_5c = 0x14;
                    /* try { // try from 00101885 to 001018c2 has its CatchHandler @ 0010190e */
  FUN_00101b12(local_58,&local_5c);
  FUN_00101b12(local_58,&local_5c);
  FUN_00101b12(local_58,&local_5c);
  FUN_00101b4c(local_38,local_58);
                    /* try { // try from 001018ca to 001018ce has its CatchHandler @ 001018f9 */
  FUN_0010153d(local_38);
  FUN_00101a7a(local_38);
  FUN_00101a7a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001019ad(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101a1a(undefined8 param_1)

{
  FUN_00101ac6(param_1);
  return;
}




void FUN_001024a2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010247c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102987(void)

{
  return;
}



