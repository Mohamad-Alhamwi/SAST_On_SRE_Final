
undefined8 FUN_00101e8d(undefined8 param_1)

{
  return param_1;
}




void FUN_00101682(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019b0(local_58);
  local_60 = (void *)0x0;
  local_60 = realloc((void *)0x0,0x14);
                    /* try { // try from 001016d5 to 00101712 has its CatchHandler @ 0010175e */
  FUN_00101a68(local_58,&local_60);
  FUN_00101a68(local_58,&local_60);
  FUN_00101a68(local_58,&local_60);
  FUN_00101aa2(local_38,local_58);
                    /* try { // try from 0010171a to 0010171e has its CatchHandler @ 00101749 */
  FUN_00101469(local_38);
  FUN_001019d0(local_38);
  FUN_001019d0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b6e(undefined8 param_1)

{
  FUN_00101e12(param_1);
  return;
}




void FUN_00102290(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e8d(param_3);
  p_Var2 = (_List_node_base *)FUN_00101ea0(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f6a(param_1,1);
  return;
}




void FUN_00102900(void)

{
  return;
}




void FUN_00101ffe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fec(param_2);
  FUN_00101fc2(param_1,uVar1);
  FUN_0010191a(param_1);
  return;
}




void FUN_0010298f(void)

{
  return;
}




void FUN_00102c80(void)

{
  return;
}




void FUN_001020a8(undefined8 *param_1)

{
  FUN_0010226e(*param_1);
  return;
}




undefined8 FUN_001029dc(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001029a5,local_18);
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




void FUN_00101630(long param_1)

{
  FUN_00101652(param_1 + 0x10);
  return;
}




ulong FUN_001027c8(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001022e5(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_001021bc(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010212b(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001022b7(undefined8 param_1,undefined8 param_2)

{
  FUN_0010235a(param_1,param_2,0);
  return;
}




void FUN_00101970(undefined8 param_1)

{
  FUN_00101a1c(param_1);
  return;
}




void FUN_0010296e(void)

{
  return;
}




void FUN_00102942(void)

{
  return;
}




long FUN_00102238(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001023fa(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102bbf(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101f6a(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102963(void)

{
  return;
}




void FUN_00101e12(void)

{
  return;
}




void FUN_001028ea(void)

{
  return;
}




ulong FUN_001026c4(long param_1,ulong param_2,long param_3)

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




void FUN_00101990(undefined8 param_1)

{
  FUN_001019f0(param_1);
  return;
}




undefined8 FUN_001028a7(void)

{
  return 1;
}




void FUN_00102500(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102556(undefined4 param_1)

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




int FUN_001028c5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101522(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101580(param_1);
  FUN_001015cc(&local_18);
  FUN_001015f0(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e22(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101670(undefined8 param_1)

{
  return param_1;
}




void FUN_001019d0(undefined8 param_1)

{
  FUN_00101a3c(param_1);
  return;
}




void FUN_00102454(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102979(void)

{
  return;
}




void FUN_0010225a(void)

{
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




void FUN_001019b0(undefined8 param_1)

{
  FUN_00101990(param_1);
  return;
}




void FUN_00101db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010205e(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001020a8(&local_18);
    FUN_001020ca(local_10,uVar2);
    FUN_00102084(&local_18);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




bool FUN_00102aa9(pthread_t *param_1)

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




undefined8 FUN_00101c7d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f94(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001022f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101e8d(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101903(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101aa2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101cce(param_2);
  FUN_00101c7d(&local_21,uVar1);
  FUN_00101ce0(param_1,&local_21);
  FUN_00101a1c(&local_21);
  uVar1 = FUN_00101d68(param_2);
  uVar2 = FUN_00101d18(param_2);
                    /* try { // try from 00101b2e to 00101b32 has its CatchHandler @ 00101b35 */
  FUN_00101db4(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028df(void)

{
  return;
}




void FUN_00101a68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101580(param_1);
  FUN_00101c1c(param_1,uVar1,param_2);
  return;
}




void FUN_00101a3c(undefined8 param_1)

{
  FUN_00101b9e(param_1);
  FUN_00101970(param_1);
  return;
}




void FUN_00101b9e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101630(local_20);
    uVar3 = FUN_00101e22(param_1);
    FUN_00101e34(uVar3,uVar2);
    FUN_00101e5e(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101612(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010189e(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001023d4("Calling good()...");
  FUN_0010188e();
  FUN_001023d4("Finished good()");
  FUN_001023d4("Calling bad()...");
  FUN_00101682();
  FUN_001023d4("Finished bad()");
  return 0;
}




long * FUN_001015cc(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00102b27(undefined8 *param_1)

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




void FUN_001024aa(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010290b(void)

{
  return;
}




void FUN_0010226e(long param_1)

{
  FUN_0010233c(param_1 + 0x10);
  return;
}




void FUN_00102631(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010188e(void)

{
  FUN_00101788();
  return;
}




void FUN_001014c2(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101522(param_1);
  puVar1 = (undefined8 *)*puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x696c616974696e49;
    *(undefined2 *)(puVar1 + 1) = 0x657a;
    *(undefined *)((long)puVar1 + 10) = 0;
    FUN_001023d4(puVar1);
    free(puVar1);
  }
  return;
}




void FUN_00101652(undefined8 param_1)

{
  FUN_00101670(param_1);
  return;
}




void FUN_00101ce0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fec(param_2);
  FUN_00101ffe(param_1,uVar1);
  return;
}




undefined8 FUN_00101d18(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102040(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001019f0(undefined8 param_1)

{
  FUN_00101b6e(param_1);
  FUN_0010191a(param_1);
  return;
}




void FUN_00101e5e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010212b(param_1,param_2,1);
  return;
}




undefined8 FUN_00102b04(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010292c(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00102ba0(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101f94(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fc2(param_1,param_2);
  return param_1;
}




undefined8 FUN_001028b6(void)

{
  return 0;
}




void FUN_001015f0(undefined8 *param_1)

{
  FUN_00101630(*param_1);
  return;
}




void FUN_00101e34(undefined8 param_1,undefined8 param_2)

{
  FUN_00102118(param_1,param_2);
  return;
}




void FUN_0010212b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102290(param_1,param_2,param_3);
  return;
}




void FUN_00102182(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022e5(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 * FUN_00102084(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001029a5(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001023aa(undefined8 param_1)

{
  return param_1;
}




void FUN_00102118(void)

{
  return;
}




void FUN_001024d5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102937(void)

{
  return;
}




undefined8 FUN_00101903(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101fec(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010205e(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001023d4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102664(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102c10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102bde(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001025d8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001028f5(void)

{
  return;
}




void FUN_00101788(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019b0(local_58);
  local_60 = (void *)0x0;
  local_60 = realloc((void *)0x0,0x14);
                    /* try { // try from 001017db to 00101818 has its CatchHandler @ 00101864 */
  FUN_00101a68(local_58,&local_60);
  FUN_00101a68(local_58,&local_60);
  FUN_00101a68(local_58,&local_60);
  FUN_00101aa2(local_38,local_58);
                    /* try { // try from 00101820 to 00101824 has its CatchHandler @ 0010184f */
  FUN_001014c2(local_38);
  FUN_001019d0(local_38);
  FUN_001019d0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001023bc(void)

{
  return 0x555555555555555;
}




void FUN_0010235a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001023bc(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00101cce(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d68(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102040(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102916(void)

{
  return;
}




void FUN_001025b0(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010191a(undefined8 param_1)

{
  FUN_0010193a(param_1);
  return;
}




void FUN_00101b8e(void)

{
  return;
}




void FUN_001021fb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e8d(param_3);
  FUN_001022f8(param_1,param_2,uVar1);
  return;
}




void FUN_0010233c(undefined8 param_1)

{
  FUN_001023aa(param_1);
  return;
}




void FUN_001020ca(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e8d(param_2);
  uVar2 = FUN_00101580(param_1);
  FUN_00101c1c(param_1,uVar2,uVar1);
  return;
}




void FUN_00102480(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010299a(void)

{
  return;
}




void FUN_0010193a(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_0010242c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010252b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102921(void)

{
  return;
}




void FUN_00102984(void)

{
  return;
}




void FUN_00102603(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101a1c(undefined8 param_1)

{
  FUN_00101b8e(param_1);
  return;
}




undefined8 FUN_00101580(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101612(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010215e(undefined8 param_1)

{
  FUN_001022b7(param_1,1);
  return;
}




void FUN_00101469(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101522(param_1);
  puVar1 = (undefined8 *)*puVar1;
  *puVar1 = 0x696c616974696e49;
  *(undefined2 *)(puVar1 + 1) = 0x657a;
  *(undefined *)((long)puVar1 + 10) = 0;
  FUN_001023d4(puVar1);
  free(puVar1);
  return;
}




undefined8 FUN_00101ea0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010215e(param_1);
  uVar2 = FUN_00101e22(param_1);
  FUN_00102182(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e8d(param_2);
  uVar4 = FUN_00101630(uVar1);
  FUN_001021fb(uVar2,uVar4,uVar3);
  FUN_00102238(local_38,0);
  FUN_001021bc(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101fc2(undefined8 param_1,undefined8 param_2)

{
  FUN_0010225a(param_1,param_2);
  return;
}




void FUN_00102040(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102958(void)

{
  return;
}




void FUN_0010294d(void)

{
  return;
}



