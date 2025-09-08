
undefined8 FUN_00102143(undefined8 param_1)

{
  return param_1;
}




void FUN_00101951(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c66(local_58);
  local_5c = 7;
                    /* try { // try from 00101995 to 001019d2 has its CatchHandler @ 00101a1e */
  FUN_00101d1e(local_58,&local_5c);
  FUN_00101d1e(local_58,&local_5c);
  FUN_00101d1e(local_58,&local_5c);
  FUN_00101d58(local_38,local_58);
                    /* try { // try from 001019da to 001019de has its CatchHandler @ 00101a09 */
  FUN_00101541(local_38);
  FUN_00101c86(local_38);
  FUN_00101c86(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e24(undefined8 param_1)

{
  FUN_001020c8(param_1);
  return;
}




void FUN_00102546(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101ed2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102143(param_3);
  p_Var2 = (_List_node_base *)FUN_00102156(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102220(param_1,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00102bb4(void)

{
  return;
}




void FUN_001022b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022a2(param_2);
  FUN_00102278(param_1,uVar1);
  FUN_00101bd0(param_1);
  return;
}




void FUN_00102c43(void)

{
  return;
}




void FUN_00102f30(void)

{
  return;
}




void FUN_0010235e(undefined8 *param_1)

{
  FUN_00102524(*param_1);
  return;
}




undefined8 FUN_00102c90(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102c59,local_18);
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




void FUN_0010182a(undefined8 param_1)

{
  FUN_00101848(param_1);
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




ulong FUN_00102a7c(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_0010259b(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00102472(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001023e1(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010256d(undefined8 param_1,undefined8 param_2)

{
  FUN_0010260e(param_1,param_2,0);
  return;
}




void FUN_00101c26(undefined8 param_1)

{
  FUN_00101cd2(param_1);
  return;
}




void FUN_00102c22(void)

{
  return;
}




void FUN_00102bf6(void)

{
  return;
}




long FUN_001024ee(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001026ae(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102e73(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102220(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102c17(void)

{
  return;
}




void FUN_001020c8(void)

{
  return;
}




void FUN_00102b9e(void)

{
  return;
}




ulong FUN_00102978(long param_1,ulong param_2,long param_3)

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




void FUN_00101c46(undefined8 param_1)

{
  FUN_00101ca6(param_1);
  return;
}




undefined8 FUN_00102b5b(void)

{
  return 1;
}




void FUN_001027b4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010280a(undefined4 param_1)

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




int FUN_00102b79(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
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




undefined8 FUN_001020d8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010185a(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c66(local_58);
  local_5c = 10;
                    /* try { // try from 0010189e to 001018db has its CatchHandler @ 00101927 */
  FUN_00101d1e(local_58,&local_5c);
  FUN_00101d1e(local_58,&local_5c);
  FUN_00101d1e(local_58,&local_5c);
  FUN_00101d58(local_38,local_58);
                    /* try { // try from 001018e3 to 001018e7 has its CatchHandler @ 00101912 */
  FUN_00101469(local_38);
  FUN_00101c86(local_38);
  FUN_00101c86(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c86(undefined8 param_1)

{
  FUN_00101cf2(param_1);
  return;
}




void FUN_00102708(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102c2d(void)

{
  return;
}




void FUN_00102510(void)

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
    FUN_00102688("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001026e0(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101c66(undefined8 param_1)

{
  FUN_00101c46(param_1);
  return;
}




void FUN_0010206a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102314(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010235e(&local_18);
    FUN_00102380(local_10,uVar2);
    FUN_0010233a(&local_18);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




bool FUN_00102d5d(pthread_t *param_1)

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




undefined8 FUN_00101f33(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010224a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001025ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102143(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101bb9(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101d58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101f84(param_2);
  FUN_00101f33(&local_21,uVar1);
  FUN_00101f96(param_1,&local_21);
  FUN_00101cd2(&local_21);
  uVar1 = FUN_0010201e(param_2);
  uVar2 = FUN_00101fce(param_2);
                    /* try { // try from 00101de4 to 00101de8 has its CatchHandler @ 00101deb */
  FUN_0010206a(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b93(void)

{
  return;
}




void FUN_00101d1e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101758(param_1);
  FUN_00101ed2(param_1,uVar1,param_2);
  return;
}




void FUN_00101cf2(undefined8 param_1)

{
  FUN_00101e54(param_1);
  FUN_00101c26(param_1);
  return;
}




void FUN_00101e54(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101808(local_20);
    uVar3 = FUN_001020d8(param_1);
    FUN_001020ea(uVar3,uVar2);
    FUN_00102114(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101808(long param_1)

{
  FUN_0010182a(param_1 + 0x10);
  return;
}




undefined8 FUN_00101b54(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102688("Calling good()...");
  FUN_00101b3f();
  FUN_00102688("Finished good()");
  FUN_00102688("Calling bad()...");
  FUN_0010185a();
  FUN_00102688("Finished bad()");
  return 0;
}




void FUN_001017c8(undefined8 *param_1)

{
  FUN_00101808(*param_1);
  return;
}




undefined8 FUN_00102ddb(undefined8 *param_1)

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




void FUN_0010275e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102bbf(void)

{
  return;
}




void FUN_00102524(long param_1)

{
  FUN_001025f0(param_1 + 0x10);
  return;
}




void FUN_001028e5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101b3f(void)

{
  FUN_00101951();
  FUN_00101a48();
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




undefined8 FUN_00101848(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f96(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022a2(param_2);
  FUN_001022b4(param_1,uVar1);
  return;
}




undefined8 FUN_00101fce(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022f6(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ca6(undefined8 param_1)

{
  FUN_00101e24(param_1);
  FUN_00101bd0(param_1);
  return;
}




void FUN_00102114(undefined8 param_1,undefined8 param_2)

{
  FUN_001023e1(param_1,param_2,1);
  return;
}




undefined8 FUN_00102db8(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102be0(void)

{
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
    FUN_00102688("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001026e0(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00102e54(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_0010224a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102278(param_1,param_2);
  return param_1;
}




undefined8 FUN_00102b6a(void)

{
  return 0;
}




void FUN_001017ea(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001020ea(undefined8 param_1,undefined8 param_2)

{
  FUN_001023ce(param_1,param_2);
  return;
}




void FUN_001023e1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102546(param_1,param_2,param_3);
  return;
}




void FUN_00102438(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010259b(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 * FUN_0010233a(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102c59(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010265e(undefined8 param_1)

{
  return param_1;
}




void FUN_001023ce(void)

{
  return;
}




void FUN_00102789(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102beb(void)

{
  return;
}




undefined8 FUN_00101bb9(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001022a2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102314(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102688(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102918(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
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




void FUN_00102e92(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010288c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102ba9(void)

{
  return;
}




void FUN_00101a48(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c66(local_58);
  local_5c = 10;
                    /* try { // try from 00101a8c to 00101ac9 has its CatchHandler @ 00101b15 */
  FUN_00101d1e(local_58,&local_5c);
  FUN_00101d1e(local_58,&local_5c);
  FUN_00101d1e(local_58,&local_5c);
  FUN_00101d58(local_38,local_58);
                    /* try { // try from 00101ad1 to 00101ad5 has its CatchHandler @ 00101b00 */
  FUN_00101619(local_38);
  FUN_00101c86(local_38);
  FUN_00101c86(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102670(void)

{
  return 0x555555555555555;
}




void FUN_0010260e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102670(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00101f84(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010201e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022f6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102bca(void)

{
  return;
}




void FUN_00102864(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101bd0(undefined8 param_1)

{
  FUN_00101bf0(param_1);
  return;
}




void FUN_00101e44(void)

{
  return;
}




void FUN_001024b1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102143(param_3);
  FUN_001025ae(param_1,param_2,uVar1);
  return;
}




void FUN_001025f0(undefined8 param_1)

{
  FUN_0010265e(param_1);
  return;
}




void FUN_00102380(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102143(param_2);
  uVar2 = FUN_00101758(param_1);
  FUN_00101ed2(param_1,uVar2,uVar1);
  return;
}




void FUN_00102734(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102c4e(void)

{
  return;
}




void FUN_00101bf0(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001026e0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001027df(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102bd5(void)

{
  return;
}




void FUN_00102c38(void)

{
  return;
}




void FUN_001028b7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101cd2(undefined8 param_1)

{
  FUN_00101e44(param_1);
  return;
}




long * FUN_001017a4(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102414(undefined8 param_1)

{
  FUN_0010256d(param_1,1);
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
    FUN_00102688("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001026e0(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




undefined8 FUN_00102156(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102414(param_1);
  uVar2 = FUN_001020d8(param_1);
  FUN_00102438(local_38,uVar2,uVar1);
  uVar3 = FUN_00102143(param_2);
  uVar4 = FUN_00101808(uVar1);
  FUN_001024b1(uVar2,uVar4,uVar3);
  FUN_001024ee(local_38,0);
  FUN_00102472(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102278(undefined8 param_1,undefined8 param_2)

{
  FUN_00102510(param_1,param_2);
  return;
}




void FUN_001022f6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102c0c(void)

{
  return;
}




void FUN_00102c01(void)

{
  return;
}



