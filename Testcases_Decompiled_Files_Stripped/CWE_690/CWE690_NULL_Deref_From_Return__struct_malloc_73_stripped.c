
long FUN_0010209a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
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




undefined8 FUN_00101e30(undefined8 param_1)

{
  return param_1;
}




void FUN_00102445(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101ea2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102949(void)

{
  return;
}




undefined8 FUN_00102159(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101657(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102399("Calling good()...");
  FUN_00101647();
  FUN_00102399("Finished good()");
  FUN_00102399("Calling bad()...");
  FUN_00101449();
  FUN_00102399("Finished bad()");
  return 0;
}




undefined8 FUN_0010221e(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
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




void FUN_001028fc(void)

{
  return;
}




void FUN_0010249a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101647(void)

{
  FUN_00101548();
  return;
}




void FUN_00102378(undefined8 *param_1)

{
  FUN_00101c26(*param_1);
  return;
}




void FUN_0010246f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c16(void)

{
  return;
}




void FUN_00102ba3(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




undefined8 FUN_00102ac9(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001023bf(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001025f6(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001020d0(long param_1)

{
  FUN_001021b0(param_1 + 0x10);
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
  FUN_0010229b(local_38);
  FUN_00101788(local_38);
  FUN_00101788(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b84(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101fc0(undefined8 param_1)

{
  FUN_0010212b(param_1,1);
  return;
}




void FUN_00102933(void)

{
  return;
}




void FUN_001028f1(void)

{
  return;
}




void FUN_00101c26(long param_1)

{
  FUN_00101f5c(param_1 + 0x10);
  return;
}




void FUN_00102907(void)

{
  return;
}




int FUN_0010288a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001028af(void)

{
  return;
}




void FUN_0010291d(void)

{
  return;
}




void FUN_001017d4(undefined8 param_1)

{
  FUN_00101946(param_1);
  return;
}




void FUN_00101768(undefined8 param_1)

{
  FUN_00101748(param_1);
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




void FUN_00101c5a(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f7a(param_1,param_2);
  return;
}




ulong FUN_00102689(long param_1,ulong param_2,long param_3)

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




void FUN_00102bd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001023f1(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001016f2(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101c48(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f8d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102104(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001016bc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 * FUN_00101ec8(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001024c5(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101dae(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101946(void)

{
  return;
}




void FUN_00102928(void)

{
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




undefined8 FUN_00101cd2(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e84(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
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




void FUN_00101820(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001019d4(param_1);
  FUN_00101a20(param_1,uVar1,param_2);
  return;
}




void FUN_00101ae4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e30(param_2);
  FUN_00101e42(param_1,uVar1);
  return;
}




void FUN_001017a8(undefined8 param_1)

{
  FUN_00101926(param_1);
  FUN_001016d2(param_1);
  return;
}




undefined8 FUN_0010286c(void)

{
  return 1;
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




void FUN_00102954(void)

{
  return;
}




void FUN_00102419(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001028db(void)

{
  return;
}




undefined8 FUN_00101ad2(undefined8 param_1)

{
  return param_1;
}




void FUN_00101748(undefined8 param_1)

{
  FUN_001017a8(param_1);
  return;
}




void FUN_00101926(undefined8 param_1)

{
  FUN_00101c16(param_1);
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




void FUN_00101f5c(undefined8 param_1)

{
  FUN_001020f2(param_1);
  return;
}




void FUN_00101c84(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f8d(param_1,param_2,1);
  return;
}




void FUN_0010205d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cd2(param_3);
  FUN_0010216c(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001029a1(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010296a,local_18);
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




void FUN_001016d2(undefined8 param_1)

{
  FUN_001016f2(param_1);
  return;
}




undefined8 FUN_001020f2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102912(void)

{
  return;
}




void FUN_001017f4(undefined8 param_1)

{
  FUN_00101956(param_1);
  FUN_00101728(param_1);
  return;
}




void FUN_0010201e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00101f8d(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010229b(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001022f6(param_1);
  __ptr = (undefined4 *)*puVar1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    FUN_001025f6(__ptr);
    free(__ptr);
  }
  return;
}




long * FUN_00102354(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
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




void FUN_00101e06(undefined8 param_1,undefined8 param_2)

{
  FUN_001020bc(param_1,param_2);
  return;
}




void FUN_00102575(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102248(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001022f6(param_1);
  __ptr = (undefined4 *)*puVar1;
  *__ptr = 1;
  __ptr[1] = 1;
  FUN_001025f6(__ptr);
  free(__ptr);
  return;
}




undefined8 FUN_0010287b(void)

{
  return 0;
}




bool FUN_00102a6e(pthread_t *param_1)

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




void FUN_0010212b(undefined8 param_1,undefined8 param_2)

{
  FUN_001021ce(param_1,param_2,0);
  return;
}




void FUN_001021b0(undefined8 param_1)

{
  FUN_0010221e(param_1);
  return;
}




void FUN_001025c8(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001028e6(void)

{
  return;
}




void FUN_001028c5(void)

{
  return;
}




void FUN_0010293e(void)

{
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




void FUN_0010251b(undefined4 param_1)

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




void FUN_0010259d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101eec(undefined8 *param_1)

{
  FUN_001020d0(*param_1);
  return;
}




void FUN_00101f7a(void)

{
  return;
}




void FUN_0010295f(void)

{
  return;
}




void FUN_001028ba(void)

{
  return;
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




void FUN_00101e42(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e30(param_2);
  FUN_00101e06(param_1,uVar1);
  FUN_001016d2(param_1);
  return;
}




void FUN_00102399(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001024f0(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102230(void)

{
  return 0x555555555555555;
}




ulong FUN_0010278d(long param_1,ulong param_2,long param_3)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
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




void FUN_00102629(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001028a4(void)

{
  return;
}




void FUN_0010296a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102c40(void)

{
  return;
}




void FUN_001028d0(void)

{
  return;
}




undefined8 FUN_00101dd8(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e06(param_1,param_2);
  return param_1;
}




void FUN_00101cb4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101788(undefined8 param_1)

{
  FUN_001017f4(param_1);
  return;
}




void FUN_001022f6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001019d4(param_1);
  FUN_00102354(&local_18);
  FUN_00102378(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101728(undefined8 param_1)

{
  FUN_001017d4(param_1);
  return;
}




void FUN_001020bc(void)

{
  return;
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




void FUN_00102b65(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102aec(undefined8 *param_1)

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



