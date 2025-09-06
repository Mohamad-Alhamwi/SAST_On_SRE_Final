
void FUN_0010205d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cd2(param_3);
  FUN_0010216c(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00101a81(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dd8(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101e06(undefined8 param_1,undefined8 param_2)

{
  FUN_001020bc(param_1,param_2);
  return;
}




void FUN_0010240b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e84(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010293b(void)

{
  return;
}




void FUN_0010212b(undefined8 param_1,undefined8 param_2)

{
  FUN_001021ce(param_1,param_2,0);
  return;
}




void FUN_00101728(undefined8 param_1)

{
  FUN_001017d4(param_1);
  return;
}




void FUN_001021ce(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102230(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101647(void)

{
  FUN_00101548();
  return;
}




void FUN_00101956(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101c26(local_20);
    uVar3 = FUN_00101c48(param_1);
    FUN_00101c5a(uVar3,uVar2);
    FUN_00101c84(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_001028e3(void)

{
  return;
}




void FUN_00102461(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001016f2(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




long * FUN_00102346(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102437(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101c26(long param_1)

{
  FUN_00101f5c(param_1 + 0x10);
  return;
}




void FUN_00102b95(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101548(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101768(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(8);
                    /* try { // try from 00101594 to 001015d1 has its CatchHandler @ 0010161d */
  FUN_00101820(local_58,&local_60);
  FUN_00101820(local_58,&local_60);
  FUN_00101820(local_58,&local_60);
  FUN_0010185a(local_38,local_58);
                    /* try { // try from 001015d9 to 001015dd has its CatchHandler @ 00101608 */
  FUN_00102294(local_38);
  FUN_00101788(local_38);
  FUN_00101788(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102abb(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010238b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001025ba(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001020bc(void)

{
  return;
}




void FUN_001016d2(undefined8 param_1)

{
  FUN_001016f2(param_1);
  return;
}




void FUN_00102b76(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




void FUN_00101f8d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102104(param_1,param_2,param_3);
  return;
}




void FUN_0010291a(void)

{
  return;
}




void FUN_001028d8(void)

{
  return;
}




undefined8 FUN_00101c48(undefined8 param_1)

{
  return param_1;
}




void FUN_001028ee(void)

{
  return;
}




undefined8 FUN_0010286d(void)

{
  return 0;
}




void FUN_00102896(void)

{
  return;
}




void FUN_00102904(void)

{
  return;
}




void FUN_001017f4(undefined8 param_1)

{
  FUN_00101956(param_1);
  FUN_00101728(param_1);
  return;
}




void FUN_00101fc0(undefined8 param_1)

{
  FUN_0010212b(param_1,1);
  return;
}




void FUN_00101a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101cd2(param_3);
  p_Var2 = (_List_node_base *)FUN_00101ce4(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101dae(param_1,1);
  return;
}




void FUN_00101c84(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f8d(param_1,param_2,1);
  return;
}




void FUN_0010261b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102bc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001023b1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101449(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101768(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(8);
                    /* try { // try from 00101495 to 001014d2 has its CatchHandler @ 0010151e */
  FUN_00101820(local_58,&local_60);
  FUN_00101820(local_58,&local_60);
  FUN_00101820(local_58,&local_60);
  FUN_0010185a(local_38,local_58);
                    /* try { // try from 001014da to 001014de has its CatchHandler @ 00101509 */
  FUN_00102248(local_38);
  FUN_00101788(local_38);
  FUN_00101788(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101788(undefined8 param_1)

{
  FUN_001017f4(param_1);
  return;
}




void FUN_00101c5a(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f7a(param_1,param_2);
  return;
}




void FUN_00101f7a(void)

{
  return;
}




void FUN_00101748(undefined8 param_1)

{
  FUN_001017a8(param_1);
  return;
}




undefined8 FUN_00101ea2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_0010248c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101dd8(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e06(param_1,param_2);
  return param_1;
}




void FUN_0010290f(void)

{
  return;
}




void FUN_00101dae(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00101ce4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101fc0(param_1);
  uVar2 = FUN_00101c48(param_1);
  FUN_00101fe4(local_38,uVar2,uVar1);
  uVar3 = FUN_00101cd2(param_2);
  uVar4 = FUN_00101c26(uVar1);
  FUN_0010205d(uVar2,uVar4,uVar3);
  FUN_0010209a(local_38,0);
  FUN_0010201e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101e42(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e30(param_2);
  FUN_00101e06(param_1,uVar1);
  FUN_001016d2(param_1);
  return;
}




undefined8 FUN_00101657(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010238b("Calling good()...");
  FUN_00101647();
  FUN_0010238b("Finished good()");
  FUN_0010238b("Calling bad()...");
  FUN_00101449();
  FUN_0010238b("Finished bad()");
  return 0;
}




void FUN_00101946(void)

{
  return;
}




undefined8 FUN_00101b1c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e84(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010185a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101ad2(param_2);
  FUN_00101a81(&local_21,uVar1);
  FUN_00101ae4(param_1,&local_21);
  FUN_001017d4(&local_21);
  uVar1 = FUN_00101b6c(param_2);
  uVar2 = FUN_00101b1c(param_2);
                    /* try { // try from 001018e6 to 001018ea has its CatchHandler @ 001018ed */
  FUN_00101bb8(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_0010277f(long param_1,ulong param_2,long param_3)

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




void FUN_00102946(void)

{
  return;
}




void FUN_001023e3(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001028c2(void)

{
  return;
}




void FUN_00101ae4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e30(param_2);
  FUN_00101e42(param_1,uVar1);
  return;
}




void FUN_001017d4(undefined8 param_1)

{
  FUN_00101946(param_1);
  return;
}




undefined8 FUN_001019d4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cb4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101eec(undefined8 *param_1)

{
  FUN_001020d0(*param_1);
  return;
}




void FUN_00101f0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101cd2(param_2);
  uVar2 = FUN_001019d4(param_1);
  FUN_00101a20(param_1,uVar2,uVar1);
  return;
}




void FUN_00101cb4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010201e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00101f8d(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_00102993(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010295c,local_18);
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




void FUN_00101768(undefined8 param_1)

{
  FUN_00101748(param_1);
  return;
}




void FUN_001020d0(long param_1)

{
  FUN_001021b0(param_1 + 0x10);
  return;
}




void FUN_001028f9(void)

{
  return;
}




void FUN_00101926(undefined8 param_1)

{
  FUN_00101c16(param_1);
  return;
}




void FUN_00101fe4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102159(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102248(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001022e8(param_1);
  puVar1 = (undefined8 *)*puVar1;
  *puVar1 = 5;
  FUN_0010248c(*puVar1);
  free(puVar1);
  return;
}




void FUN_001022e8(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001019d4(param_1);
  FUN_00102346(&local_18);
  FUN_0010236a(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001021b0(undefined8 param_1)

{
  FUN_0010221e(param_1);
  return;
}




void FUN_0010250d(undefined4 param_1)

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




undefined8 FUN_00102230(void)

{
  return 0x555555555555555;
}




undefined8 FUN_0010285e(void)

{
  return 1;
}




bool FUN_00102a60(pthread_t *param_1)

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




undefined8 FUN_00101b6c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e84(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102104(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010216c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101cd2(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001016bc(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010258f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001028cd(void)

{
  return;
}




void FUN_00102925(void)

{
  return;
}




void FUN_001028ac(void)

{
  return;
}




void FUN_00102930(void)

{
  return;
}




undefined8 FUN_00101ad2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001016bc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001024e2(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102567(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 * FUN_00101ec8(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00101f5c(undefined8 param_1)

{
  FUN_001020f2(param_1);
  return;
}




void FUN_00102951(void)

{
  return;
}




void FUN_001028a1(void)

{
  return;
}




void FUN_00101bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101ea2(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101eec(&local_18);
    FUN_00101f0e(local_10,uVar2);
    FUN_00101ec8(&local_18);
  }
  return;
}




undefined8 FUN_00101e30(undefined8 param_1)

{
  return param_1;
}




void FUN_0010236a(undefined8 *param_1)

{
  FUN_00101c26(*param_1);
  return;
}




void FUN_001024b7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010221e(undefined8 param_1)

{
  return param_1;
}




ulong FUN_0010267b(long param_1,ulong param_2,long param_3)

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




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101390();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101c16(void)

{
  return;
}




void FUN_001025e8(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_0010287c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010295c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102c30(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_001028b7(void)

{
  return;
}




undefined8 FUN_00101cd2(undefined8 param_1)

{
  return param_1;
}




void FUN_00101820(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001019d4(param_1);
  FUN_00101a20(param_1,uVar1,param_2);
  return;
}




void FUN_00102294(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001022e8(param_1);
  puVar1 = (undefined8 *)*puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 5;
    FUN_0010248c(*puVar1);
    free(puVar1);
  }
  return;
}




void FUN_001017a8(undefined8 param_1)

{
  FUN_00101926(param_1);
  FUN_001016d2(param_1);
  return;
}




long FUN_0010209a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




undefined8 FUN_001020f2(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




undefined8 FUN_00102159(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b57(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102ade(undefined8 *param_1)

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



