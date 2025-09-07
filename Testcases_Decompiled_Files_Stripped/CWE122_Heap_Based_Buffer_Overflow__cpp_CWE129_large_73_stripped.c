
void FUN_00101e26(undefined8 param_1)

{
  FUN_001020ca(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00101b41(void)

{
  FUN_00101953();
  FUN_00101a4a();
  return;
}




void FUN_001022f8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101bd2(undefined8 param_1)

{
  FUN_00101bf2(param_1);
  return;
}




void FUN_0010280c(undefined4 param_1)

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




void FUN_00101f98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022a4(param_2);
  FUN_001022b6(param_1,uVar1);
  return;
}




void FUN_00102bab(void)

{
  return;
}




void FUN_00102c24(void)

{
  return;
}




void FUN_001020ca(void)

{
  return;
}




void FUN_00102bcc(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00102f30(void)

{
  return;
}




void FUN_001026e2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 * FUN_0010233c(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102222(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102316(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




long * FUN_001017a6(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




int FUN_00102b7b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




ulong FUN_0010297a(long param_1,ulong param_2,long param_3)

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




void FUN_0010227a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102512(param_1,param_2);
  return;
}




void FUN_00102474(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001023e3(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102c03(void)

{
  return;
}




void FUN_00101e56(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010180a(local_20);
    uVar3 = FUN_001020da(param_1);
    FUN_001020ec(uVar3,uVar2);
    FUN_00102116(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00102b6c(void)

{
  return 0;
}




void FUN_00101cd4(undefined8 param_1)

{
  FUN_00101e46(param_1);
  return;
}




void FUN_001027b6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102c50(void)

{
  return;
}




void FUN_001026b0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001017ca(undefined8 *param_1)

{
  FUN_0010180a(*param_1);
  return;
}




void FUN_0010270a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102c92(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102c5b,local_18);
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




void FUN_0010256f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102610(param_1,param_2,0);
  return;
}




void FUN_001025b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102145(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101bbb(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102760(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101cf4(undefined8 param_1)

{
  FUN_00101e56(param_1);
  FUN_00101c28(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




bool FUN_00102d5f(pthread_t *param_1)

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




void FUN_0010180a(long param_1)

{
  FUN_0010182c(param_1 + 0x10);
  return;
}




long FUN_001024f0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102b95(void)

{
  return;
}




undefined8 FUN_001022a4(undefined8 param_1)

{
  return param_1;
}




void FUN_001017ec(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101ca8(undefined8 param_1)

{
  FUN_00101e26(param_1);
  FUN_00101bd2(param_1);
  return;
}




void FUN_00102e94(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102bd7(void)

{
  return;
}




void FUN_00102e75(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101bf2(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102360(undefined8 *param_1)

{
  FUN_00102526(*param_1);
  return;
}




void FUN_00101a4a(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c68(local_58);
  local_5c = 10;
                    /* try { // try from 00101a8e to 00101acb has its CatchHandler @ 00101b17 */
  FUN_00101d20(local_58,&local_5c);
  FUN_00101d20(local_58,&local_5c);
  FUN_00101d20(local_58,&local_5c);
  FUN_00101d5a(local_38,local_58);
                    /* try { // try from 00101ad3 to 00101ad7 has its CatchHandler @ 00101b02 */
  FUN_00101625(local_38);
  FUN_00101c88(local_38);
  FUN_00101c88(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010278b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101953(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c68(local_58);
  local_5c = 7;
                    /* try { // try from 00101997 to 001019d4 has its CatchHandler @ 00101a20 */
  FUN_00101d20(local_58,&local_5c);
  FUN_00101d20(local_58,&local_5c);
  FUN_00101d20(local_58,&local_5c);
  FUN_00101d5a(local_38,local_58);
                    /* try { // try from 001019dc to 001019e0 has its CatchHandler @ 00101a0b */
  FUN_00101557(local_38);
  FUN_00101c88(local_38);
  FUN_00101c88(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010185c(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c68(local_58);
  local_5c = 10;
                    /* try { // try from 001018a0 to 001018dd has its CatchHandler @ 00101929 */
  FUN_00101d20(local_58,&local_5c);
  FUN_00101d20(local_58,&local_5c);
  FUN_00101d20(local_58,&local_5c);
  FUN_00101d5a(local_38,local_58);
                    /* try { // try from 001018e5 to 001018e9 has its CatchHandler @ 00101914 */
  FUN_00101489(local_38);
  FUN_00101c88(local_38);
  FUN_00101c88(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101bbb(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101557(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001016fc(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_0010268a("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001026e2(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00102ec0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102bed(void)

{
  return;
}




void FUN_00102526(long param_1)

{
  FUN_001025f2(param_1 + 0x10);
  return;
}




void FUN_00102866(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001022b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022a4(param_2);
  FUN_0010227a(param_1,uVar1);
  FUN_00101bd2(param_1);
  return;
}




undefined8 FUN_00102672(void)

{
  return 0x555555555555555;
}




void FUN_00101489(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001016fc(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_0010268a("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001026e2(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00101c48(undefined8 param_1)

{
  FUN_00101ca8(param_1);
  return;
}




void FUN_00101c68(undefined8 param_1)

{
  FUN_00101c48(param_1);
  return;
}




void FUN_0010182c(undefined8 param_1)

{
  FUN_0010184a(param_1);
  return;
}




void FUN_00101d5a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101f86(param_2);
  FUN_00101f35(&local_21,uVar1);
  FUN_00101f98(param_1,&local_21);
  FUN_00101cd4(&local_21);
  uVar1 = FUN_00102020(param_2);
  uVar2 = FUN_00101fd0(param_2);
                    /* try { // try from 00101de6 to 00101dea has its CatchHandler @ 00101ded */
  FUN_0010206c(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102be2(void)

{
  return;
}




void FUN_001028e7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102bf8(void)

{
  return;
}




void FUN_00101ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102145(param_3);
  p_Var2 = (_List_node_base *)FUN_00102158(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102222(param_1,1);
  return;
}




void FUN_00102736(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102c5b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010175a(param_1);
  FUN_00101ed4(param_1,uVar1,param_2);
  return;
}




void FUN_00102116(undefined8 param_1,undefined8 param_2)

{
  FUN_001023e3(param_1,param_2,1);
  return;
}




undefined8 FUN_00102158(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102416(param_1);
  uVar2 = FUN_001020da(param_1);
  FUN_0010243a(local_38,uVar2,uVar1);
  uVar3 = FUN_00102145(param_2);
  uVar4 = FUN_0010180a(uVar1);
  FUN_001024b3(uVar2,uVar4,uVar3);
  FUN_001024f0(local_38,0);
  FUN_00102474(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_0010206c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102316(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102360(&local_18);
    FUN_00102382(local_10,uVar2);
    FUN_0010233c(&local_18);
  }
  return;
}




void FUN_00102bc1(void)

{
  return;
}




void FUN_001023e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102548(param_1,param_2,param_3);
  return;
}




void FUN_00102c3a(void)

{
  return;
}




void FUN_001020ec(undefined8 param_1,undefined8 param_2)

{
  FUN_001023d0(param_1,param_2);
  return;
}




void FUN_00102548(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010291a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101625(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001016fc(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_0010268a("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001026e2(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




undefined8 FUN_00101f86(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102020(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022f8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010243a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010259d(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_0010268a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102c19(void)

{
  return;
}




undefined8 FUN_00102dba(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102e56(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102c0e(void)

{
  return;
}




void FUN_00102c2f(void)

{
  return;
}




void FUN_00102610(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102672(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001027e1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
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




void FUN_00102416(undefined8 param_1)

{
  FUN_0010256f(param_1,1);
  return;
}




void FUN_001023d0(void)

{
  return;
}




void FUN_00101c28(undefined8 param_1)

{
  FUN_00101cd4(param_1);
  return;
}




void FUN_00101c88(undefined8 param_1)

{
  FUN_00101cf4(param_1);
  return;
}




void FUN_0010288e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001025f2(undefined8 param_1)

{
  FUN_00102660(param_1);
  return;
}




void FUN_001016fc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010175a(param_1);
  FUN_001017a6(&local_18);
  FUN_001017ca(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102ddd(undefined8 *param_1)

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




undefined8 FUN_00101b56(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010268a("Calling good()...");
  FUN_00101b41();
  FUN_0010268a("Finished good()");
  FUN_0010268a("Calling bad()...");
  FUN_0010185c();
  FUN_0010268a("Finished bad()");
  return 0;
}




undefined8 FUN_0010224c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010227a(param_1,param_2);
  return param_1;
}




void FUN_00102382(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102145(param_2);
  uVar2 = FUN_0010175a(param_1);
  FUN_00101ed4(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_001020da(undefined8 param_1)

{
  return param_1;
}




void FUN_00102512(void)

{
  return;
}




void FUN_00102bb6(void)

{
  return;
}




undefined8 FUN_0010175a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017ec(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024b3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102145(param_3);
  FUN_001025b0(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_0010259d(undefined8 param_1)

{
  return param_1;
}




void FUN_001028b9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102ba0(void)

{
  return;
}




undefined8 FUN_00102660(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010184a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102145(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e46(void)

{
  return;
}




undefined8 FUN_00101f35(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010224c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101fd0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022f8(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102b5d(void)

{
  return 1;
}




ulong FUN_00102a7e(long param_1,ulong param_2,long param_3)

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




void FUN_00102c45(void)

{
  return;
}



