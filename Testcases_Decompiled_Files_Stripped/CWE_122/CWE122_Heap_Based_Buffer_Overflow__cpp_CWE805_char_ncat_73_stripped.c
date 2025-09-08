
void FUN_00101a5e(undefined8 param_1)

{
  FUN_00101b0a(param_1);
  return;
}




undefined8 FUN_0010166e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101700(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f22(undefined8 param_1,undefined8 param_2)

{
  FUN_00102206(param_1,param_2);
  return;
}




void FUN_00101700(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001024c2(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101b2a(undefined8 param_1)

{
  FUN_00101c8c(param_1);
  FUN_00101a5e(param_1);
  return;
}




void FUN_0010271f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001029f9(void)

{
  return;
}




void FUN_00101c7c(void)

{
  return;
}




ulong FUN_001028b6(long param_1,ulong param_2,long param_3)

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




bool FUN_00102b97(pthread_t *param_1)

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




void FUN_001023a5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102448(param_1,param_2,0);
  return;
}




undefined8 FUN_00101f7b(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a72(void)

{
  return;
}




undefined8 FUN_00102bf2(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101e06(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010212e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f4c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102219(param_1,param_2,1);
  return;
}




void FUN_0010269e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001025c3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ea2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010214c(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102196(&local_18);
    FUN_001021b8(local_10,uVar2);
    FUN_00102172(&local_18);
  }
  return;
}




void FUN_0010212e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001029d8(void)

{
  return;
}




void FUN_00101a9e(undefined8 param_1)

{
  FUN_00101a7e(param_1);
  return;
}




void FUN_00102644(undefined4 param_1)

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




void FUN_00102cad(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102a7d(void)

{
  return;
}




undefined8 FUN_0010198c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024c2("Calling good()...");
  FUN_0010197c();
  FUN_001024c2("Finished good()");
  FUN_001024c2("Calling bad()...");
  FUN_00101770();
  FUN_001024c2("Finished bad()");
  return 0;
}




undefined8 FUN_00102498(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a25(void)

{
  return;
}




void FUN_0010237e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ee8)();
  return;
}




undefined8 FUN_001023d3(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a3b(void)

{
  return;
}




void FUN_00102219(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010237e(param_1,param_2,param_3);
  return;
}




void FUN_00102270(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023d3(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_0010242a(undefined8 param_1)

{
  FUN_00102498(param_1);
  return;
}




undefined8 FUN_001019f1(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102a46(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




undefined8 * FUN_00102172(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001026c6(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101f00(void)

{
  return;
}




void FUN_0010197c(void)

{
  FUN_00101876();
  return;
}




undefined8 FUN_00102995(void)

{
  return 1;
}




void FUN_0010171e(long param_1)

{
  FUN_00101740(param_1 + 0x10);
  return;
}




undefined8 FUN_00101f8e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010224c(param_1);
  uVar2 = FUN_00101f10(param_1);
  FUN_00102270(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f7b(param_2);
  uVar4 = FUN_0010171e(uVar1);
  FUN_001022e9(uVar2,uVar4,uVar3);
  FUN_00102326(local_38,0);
  FUN_001022aa(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101610(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010166e(param_1);
  FUN_001016ba(&local_18);
  FUN_001016de(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ccc(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102448(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024aa(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_0010156c(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101610(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncat(__dest,local_78,100);
  FUN_001024c2(__dest);
  if (__dest != (char *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a88(void)

{
  return;
}




void FUN_001014c9(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101610(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncat(__dest,local_78,100);
  FUN_001024c2(__dest);
  if (__dest != (char *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016de(undefined8 *param_1)

{
  FUN_0010171e(*param_1);
  return;
}




int FUN_001029b3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001021b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f7b(param_2);
  uVar2 = FUN_0010166e(param_1);
  FUN_00101d0a(param_1,uVar2,uVar1);
  return;
}




void FUN_001024e8(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101f10(undefined8 param_1)

{
  return param_1;
}




void FUN_00102348(void)

{
  return;
}




undefined8 FUN_0010175e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101770(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a9e(local_58);
  local_60 = (undefined *)0x0;
                    /* try { // try from 001017a5 to 00101800 has its CatchHandler @ 0010184c */
  local_60 = (undefined *)operator_new__(0x32);
  *local_60 = 0;
  FUN_00101b56(local_58,&local_60);
  FUN_00101b56(local_58,&local_60);
  FUN_00101b56(local_58,&local_60);
  FUN_00101b90(local_38,local_58);
                    /* try { // try from 00101808 to 0010180c has its CatchHandler @ 00101837 */
  FUN_001014c9(local_38);
  FUN_00101abe(local_38);
  FUN_00101abe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00101a28(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_001029a4(void)

{
  return 0;
}




void FUN_0010256e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001029cd(void)

{
  return;
}




void FUN_00101abe(undefined8 param_1)

{
  FUN_00101b2a(param_1);
  return;
}




void FUN_001023e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f7b(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019f1(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102a30(void)

{
  return;
}




void FUN_00101a08(undefined8 param_1)

{
  FUN_00101a28(param_1);
  return;
}




undefined8 FUN_00101d6b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102082(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101dce(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020da(param_2);
  FUN_001020ec(param_1,uVar1);
  return;
}




void FUN_00101c5c(undefined8 param_1)

{
  FUN_00101f00(param_1);
  return;
}




ulong FUN_001027b2(long param_1,ulong param_2,long param_3)

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




void FUN_001020b0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102348(param_1,param_2);
  return;
}




void FUN_00102a0f(void)

{
  return;
}




void FUN_00101d0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f7b(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f8e(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102058(param_1,1);
  return;
}




void FUN_00102206(void)

{
  return;
}




void FUN_00102598(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b0a(undefined8 param_1)

{
  FUN_00101c7c(param_1);
  return;
}




void FUN_00101b90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dbc(param_2);
  FUN_00101d6b(&local_21,uVar1);
  FUN_00101dce(param_1,&local_21);
  FUN_00101b0a(&local_21);
  uVar1 = FUN_00101e56(param_2);
  uVar2 = FUN_00101e06(param_2);
                    /* try { // try from 00101c1c to 00101c20 has its CatchHandler @ 00101c23 */
  FUN_00101ea2(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020da(param_2);
  FUN_001020b0(param_1,uVar1);
  FUN_00101a08(param_1);
  return;
}




void FUN_0010235c(long param_1)

{
  FUN_0010242a(param_1 + 0x10);
  return;
}




void FUN_001029ee(void)

{
  return;
}




void FUN_00102a51(void)

{
  return;
}




void FUN_001029e3(void)

{
  return;
}




void FUN_00102a04(void)

{
  return;
}




void FUN_00102a67(void)

{
  return;
}




void FUN_001022e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f7b(param_3);
  FUN_001023e6(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001024aa(void)

{
  return 0x555555555555555;
}




void FUN_00102a5c(void)

{
  return;
}




undefined8 FUN_001020da(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102082(undefined8 param_1,undefined8 param_2)

{
  FUN_001020b0(param_1,param_2);
  return param_1;
}




void FUN_00101740(undefined8 param_1)

{
  FUN_0010175e(param_1);
  return;
}




void FUN_00101876(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a9e(local_58);
  local_60 = (undefined *)0x0;
                    /* try { // try from 001018ab to 00101906 has its CatchHandler @ 00101952 */
  local_60 = (undefined *)operator_new__(100);
  *local_60 = 0;
  FUN_00101b56(local_58,&local_60);
  FUN_00101b56(local_58,&local_60);
  FUN_00101b56(local_58,&local_60);
  FUN_00101b90(local_38,local_58);
                    /* try { // try from 0010190e to 00101912 has its CatchHandler @ 0010193d */
  FUN_0010156c(local_38);
  FUN_00101abe(local_38);
  FUN_00101abe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010251a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001022aa(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102219(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_00102aca(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a93,local_18);
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




long * FUN_001016ba(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102a93(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102d70(void)

{
  return;
}




undefined8 FUN_00101e56(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010212e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102058(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101c8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010171e(local_20);
    uVar3 = FUN_00101f10(param_1);
    FUN_00101f22(uVar3,uVar2);
    FUN_00101f4c(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00102c15(undefined8 *param_1)

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




void FUN_00102196(undefined8 *param_1)

{
  FUN_0010235c(*param_1);
  return;
}




void FUN_00102752(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_0010214c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_0010224c(undefined8 param_1)

{
  FUN_001023a5(param_1,1);
  return;
}




void FUN_00102542(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001026f1(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




long FUN_00102326(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
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




undefined8 FUN_00101dbc(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a7e(undefined8 param_1)

{
  FUN_00101ade(param_1);
  return;
}




void FUN_00101ade(undefined8 param_1)

{
  FUN_00101c5c(param_1);
  FUN_00101a08(param_1);
  return;
}




void FUN_00102c8e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102d00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101b56(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010166e(param_1);
  FUN_00101d0a(param_1,uVar1,param_2);
  return;
}




void FUN_00102619(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001025ee(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102a1a(void)

{
  return;
}



