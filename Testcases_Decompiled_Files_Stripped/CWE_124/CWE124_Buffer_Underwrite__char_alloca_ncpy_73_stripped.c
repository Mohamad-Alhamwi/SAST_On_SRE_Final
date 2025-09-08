
void FUN_00101d50(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




undefined8 FUN_00101a60(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102596("Calling good()...");
  FUN_00101a50();
  FUN_00102596("Finished good()");
  FUN_00102596("Calling bad()...");
  FUN_00101720();
  FUN_00102596("Finished bad()");
  return 0;
}




undefined8 FUN_00102220(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00101afc(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102772(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101eda(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102202(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ac2(void)

{
  return;
}




void FUN_00102b3b(void)

{
  return;
}




undefined8 FUN_00101fe4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ae3(void)

{
  return;
}




void FUN_00102616(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010226a(undefined8 *param_1)

{
  FUN_00102430(*param_1);
  return;
}




undefined8 FUN_00102156(undefined8 param_1,undefined8 param_2)

{
  FUN_00102184(param_1,param_2);
  return param_1;
}




undefined8 * FUN_00102246(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




long * FUN_0010166a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102aa1(void)

{
  return;
}




ulong FUN_0010298a(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001021ae(undefined8 param_1)

{
  return param_1;
}




void FUN_001023bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010204f(param_3);
  FUN_001024ba(param_1,param_2,uVar1);
  return;
}




void FUN_00102b1a(void)

{
  return;
}




void FUN_00101dde(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_0010204f(param_3);
  p_Var2 = (_List_node_base *)FUN_00102062(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010212c(param_1,1);
  return;
}




int FUN_00102a87(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101bfe(undefined8 param_1)

{
  FUN_00101d60(param_1);
  FUN_00101b32(param_1);
  return;
}




void FUN_001026ed(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102b67(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001025ee(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010168e(undefined8 *param_1)

{
  FUN_001016ce(*param_1);
  return;
}




void FUN_00102642(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




bool FUN_00102c6b(pthread_t *param_1)

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




undefined8 FUN_001024a7(undefined8 param_1)

{
  return param_1;
}




void FUN_001024fe(undefined8 param_1)

{
  FUN_0010256c(param_1);
  return;
}




void FUN_00102697(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c2a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010161e(param_1);
  FUN_00101dde(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_00102cc6(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001016ce(long param_1)

{
  FUN_001016f0(param_1 + 0x10);
  return;
}




void FUN_0010241c(void)

{
  return;
}




void FUN_00102aac(void)

{
  return;
}




void FUN_001021c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021ae(param_2);
  FUN_00102184(param_1,uVar1);
  FUN_00101adc(param_1);
  return;
}




void FUN_001016b0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101bde(undefined8 param_1)

{
  FUN_00101d50(param_1);
  return;
}




void FUN_00102dd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102aee(void)

{
  return;
}




void FUN_00102da0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b32(undefined8 param_1)

{
  FUN_00101bde(param_1);
  return;
}




void FUN_0010228c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010204f(param_2);
  uVar2 = FUN_0010161e(param_1);
  FUN_00101dde(param_1,uVar2,uVar1);
  return;
}




void FUN_00101a50(void)

{
  FUN_001018ba();
  return;
}




void FUN_001026c2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001018ba(void)

{
  void **ppvVar1;
  long in_FS_OFFSET;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b72(local_58);
  for (ppvVar1 = &local_68; ppvVar1 != &local_68; ppvVar1 = (void **)((long)ppvVar1 + -0x1000)) {
    *(undefined8 *)((long)ppvVar1 + -8) = *(undefined8 *)((long)ppvVar1 + -8);
  }
  *(undefined8 *)((long)ppvVar1 + -8) = *(undefined8 *)((long)ppvVar1 + -8);
  local_60 = (void *)((ulong)((long)ppvVar1 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x10197d;
  memset((void *)((ulong)((long)ppvVar1 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = local_60;
                    /* try { // try from 0010199e to 001019db has its CatchHandler @ 00101a27 */
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1019a3;
  FUN_00101c2a(local_58,&local_68);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1019b6;
  FUN_00101c2a(local_58,&local_68);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1019c9;
  FUN_00101c2a(local_58,&local_68);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1019dc;
  FUN_00101c64(local_38,local_58);
                    /* try { // try from 001019e3 to 001019e7 has its CatchHandler @ 00101a12 */
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1019e8;
  FUN_00101524(local_38);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1019f4;
  FUN_00101b92(local_38);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101a00;
  FUN_00101b92(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101a4a;
  __stack_chk_fail();
}




void FUN_00101720(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  long local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b72(local_58);
  for (plVar1 = &local_68; plVar1 != &local_68; plVar1 = (long *)((long)plVar1 + -0x1000)) {
    *(undefined8 *)((long)plVar1 + -8) = *(undefined8 *)((long)plVar1 + -8);
  }
  *(undefined8 *)((long)plVar1 + -8) = *(undefined8 *)((long)plVar1 + -8);
  local_60 = (void *)((ulong)((long)plVar1 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x1017e3;
  memset((void *)((ulong)((long)plVar1 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = (long)local_60 + -8;
                    /* try { // try from 00101808 to 00101845 has its CatchHandler @ 00101891 */
  *(undefined8 *)((long)plVar1 + -0x78) = 0x10180d;
  FUN_00101c2a(local_58,&local_68);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x101820;
  FUN_00101c2a(local_58,&local_68);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x101833;
  FUN_00101c2a(local_58,&local_68);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x101846;
  FUN_00101c64(local_38,local_58);
                    /* try { // try from 0010184d to 00101851 has its CatchHandler @ 0010187c */
  *(undefined8 *)((long)plVar1 + -0x78) = 0x101852;
  FUN_00101489(local_38);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x10185e;
  FUN_00101b92(local_38);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x10186a;
  FUN_00101b92(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)plVar1 + -0x78) = 0x1018b4;
  __stack_chk_fail();
}




void FUN_00101adc(undefined8 param_1)

{
  FUN_00101afc(param_1);
  return;
}




void FUN_00101489(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015c0(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_00102596(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e40(void)

{
  return;
}




void FUN_00102b04(void)

{
  return;
}




void FUN_00102452(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010279a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102202(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102596(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
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




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00101b72(undefined8 param_1)

{
  FUN_00101b52(param_1);
  return;
}




void FUN_00101b92(undefined8 param_1)

{
  FUN_00101bfe(param_1);
  return;
}




void FUN_001016f0(undefined8 param_1)

{
  FUN_0010170e(param_1);
  return;
}




void FUN_00101d30(undefined8 param_1)

{
  FUN_00101fd4(param_1);
  return;
}




void FUN_00102af9(void)

{
  return;
}




void FUN_00102826(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102b0f(void)

{
  return;
}




undefined8 FUN_00101e3f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102156(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010266c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102b9e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b67,local_18);
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




void FUN_00101c64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101e90(param_2);
  FUN_00101e3f(&local_21,uVar1);
  FUN_00101ea2(param_1,&local_21);
  FUN_00101bde(&local_21);
  uVar1 = FUN_00101f2a(param_2);
  uVar2 = FUN_00101eda(param_2);
                    /* try { // try from 00101cf0 to 00101cf4 has its CatchHandler @ 00101cf7 */
  FUN_00101f76(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010204f(undefined8 param_1)

{
  return param_1;
}




void FUN_0010212c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101fd4(void)

{
  return;
}




void FUN_00102ad8(void)

{
  return;
}




void FUN_00102320(undefined8 param_1)

{
  FUN_00102479(param_1,1);
  return;
}




void FUN_00102b51(void)

{
  return;
}




void FUN_00102020(undefined8 param_1,undefined8 param_2)

{
  FUN_001022ed(param_1,param_2,1);
  return;
}




void FUN_00102479(undefined8 param_1,undefined8 param_2)

{
  FUN_0010251c(param_1,param_2,0);
  return;
}




ulong FUN_00102886(long param_1,ulong param_2,long param_3)

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




void FUN_00101524(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015c0(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_00102596(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ea2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021ae(param_2);
  FUN_001021c0(param_1,uVar1);
  return;
}




void FUN_00101f76(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102220(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010226a(&local_18);
    FUN_0010228c(local_10,uVar2);
    FUN_00102246(&local_18);
  }
  return;
}




void FUN_0010237e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001022ed(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001025bc(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102b30(void)

{
  return;
}




undefined8 FUN_00102ce9(undefined8 *param_1)

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




void FUN_00102d81(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102b25(void)

{
  return;
}




void FUN_00102b46(void)

{
  return;
}




undefined8 FUN_0010256c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102718(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00102344(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024a7(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001022ed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102452(param_1,param_2,param_3);
  return;
}




void FUN_00101b52(undefined8 param_1)

{
  FUN_00101bb2(param_1);
  return;
}




void FUN_00101bb2(undefined8 param_1)

{
  FUN_00101d30(param_1);
  FUN_00101adc(param_1);
  return;
}




void FUN_001027c5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010251c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010257e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001015c0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010161e(param_1);
  FUN_0010166a(&local_18);
  FUN_0010168e(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d62(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101ac5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102184(undefined8 param_1,undefined8 param_2)

{
  FUN_0010241c(param_1,param_2);
  return;
}




void FUN_001022da(void)

{
  return;
}




void FUN_00101ff6(undefined8 param_1,undefined8 param_2)

{
  FUN_001022da(param_1,param_2);
  return;
}




void FUN_00102430(long param_1)

{
  FUN_001024fe(param_1 + 0x10);
  return;
}




void FUN_00102acd(void)

{
  return;
}




undefined8 FUN_0010161e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016b0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001023fa(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001024ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0010204f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101ac5(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001027f3(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102ab7(void)

{
  return;
}




undefined8 FUN_0010257e(void)

{
  return 0x555555555555555;
}




undefined8 FUN_0010170e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102062(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102320(param_1);
  uVar2 = FUN_00101fe4(param_1);
  FUN_00102344(local_38,uVar2,uVar1);
  uVar3 = FUN_0010204f(param_2);
  uVar4 = FUN_001016ce(uVar1);
  FUN_001023bd(uVar2,uVar4,uVar3);
  FUN_001023fa(local_38,0);
  FUN_0010237e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101d60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016ce(local_20);
    uVar3 = FUN_00101fe4(param_1);
    FUN_00101ff6(uVar3,uVar2);
    FUN_00102020(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00101e90(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f2a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102202(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102a78(void)

{
  return 0;
}




undefined8 FUN_00102a69(void)

{
  return 1;
}




void FUN_00102b5c(void)

{
  return;
}



