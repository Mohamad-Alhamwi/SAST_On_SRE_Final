
undefined8 FUN_00102012(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00101918(undefined8 param_1)

{
  FUN_00101a96(param_1);
  FUN_00101842(param_1);
  return;
}




void FUN_00101d86(void)

{
  return;
}




undefined8 FUN_0010238c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101dca(undefined8 param_1,undefined8 param_2)

{
  FUN_001020ea(param_1,param_2);
  return;
}




void FUN_00102ba1(void)

{
  return;
}




void FUN_001020fd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102274(param_1,param_2,param_3);
  return;
}




void FUN_00102c30(void)

{
  return;
}




void FUN_00102f20(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_001021cd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e42(param_3);
  FUN_001022dc(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102c7d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102c46,local_18);
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




void FUN_001018b8(undefined8 param_1)

{
  FUN_00101918(param_1);
  return;
}




ulong FUN_00102a69(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001023b6(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)FUN_001025d2(param_1);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_001026cd(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00102675("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_0010229b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010233c(param_1,param_2,0);
  return;
}




undefined8 FUN_0010239e(void)

{
  return 0x555555555555555;
}




void FUN_00101ac6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101d96(local_20);
    uVar3 = FUN_00101db8(param_1);
    FUN_00101dca(uVar3,uVar2);
    FUN_00101df4(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102c0f(void)

{
  return;
}




void FUN_00102be3(void)

{
  return;
}




void FUN_001022dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00101e42(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_0010182c(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010269b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102e60(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010205c(undefined8 *param_1)

{
  FUN_00102240(*param_1);
  return;
}




void FUN_00102c04(void)

{
  return;
}




void FUN_00101f76(undefined8 param_1,undefined8 param_2)

{
  FUN_0010222c(param_1,param_2);
  return;
}




void FUN_00102b8b(void)

{
  return;
}




ulong FUN_00102965(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030dc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101b44(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e24(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102b48(void)

{
  return 1;
}




void FUN_001027a1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001027f7(undefined4 param_1)

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




int FUN_00102b66(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001017c7(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102675("Calling good()...");
  FUN_001017b2();
  FUN_00102675("Finished good()");
  FUN_00102675("Calling bad()...");
  FUN_00101449();
  FUN_00102675("Finished bad()");
  return 0;
}




undefined8 FUN_00101fa0(undefined8 param_1)

{
  return param_1;
}




void FUN_001018f8(undefined8 param_1)

{
  FUN_00101964(param_1);
  return;
}




undefined8 FUN_00101bf1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f48(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001026f5(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102c1a(void)

{
  return;
}




void FUN_0010231e(undefined8 param_1)

{
  FUN_0010238c(param_1);
  return;
}




void FUN_00101582(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018d8(local_58);
  local_5c = 7;
                    /* try { // try from 001015c6 to 00101603 has its CatchHandler @ 0010164f */
  FUN_00101990(local_58,&local_5c);
  FUN_00101990(local_58,&local_5c);
  FUN_00101990(local_58,&local_5c);
  FUN_001019ca(local_38,local_58);
                    /* try { // try from 0010160b to 0010160f has its CatchHandler @ 0010163a */
  FUN_00102467(local_38);
  FUN_001018f8(local_38);
  FUN_001018f8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e42(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e54(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f1e(param_1,1);
  return;
}




undefined8 FUN_00101f48(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f76(param_1,param_2);
  return param_1;
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




bool FUN_00102d4a(pthread_t *param_1)

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




void FUN_00101df4(undefined8 param_1,undefined8 param_2)

{
  FUN_001020fd(param_1,param_2,1);
  return;
}




void FUN_00102467(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)FUN_001025d2(param_1);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_001026cd(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00102675("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102012(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010205c(&local_18);
    FUN_0010207e(local_10,uVar2);
    FUN_00102038(&local_18);
  }
  return;
}




void FUN_00102b80(void)

{
  return;
}




undefined8 FUN_00101cdc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ff4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101c8c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ff4(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101db8(undefined8 param_1)

{
  return param_1;
}




void FUN_00101898(undefined8 param_1)

{
  FUN_00101944(param_1);
  return;
}




void FUN_00101990(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b44(param_1);
  FUN_00101b90(param_1,uVar1,param_2);
  return;
}




void FUN_00101842(undefined8 param_1)

{
  FUN_00101862(param_1);
  return;
}




undefined8 FUN_00102dc8(undefined8 *param_1)

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




void FUN_0010274b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102bac(void)

{
  return;
}




void FUN_0010233c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010239e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001028d2(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101964(undefined8 param_1)

{
  FUN_00101ac6(param_1);
  FUN_00101898(param_1);
  return;
}




void FUN_001017b2(void)

{
  FUN_00101582();
  FUN_00101679();
  return;
}




void FUN_001018d8(undefined8 param_1)

{
  FUN_001018b8(param_1);
  return;
}




undefined8 FUN_00101e42(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102130(param_1);
  uVar2 = FUN_00101db8(param_1);
  FUN_00102154(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e42(param_2);
  uVar4 = FUN_00101d96(uVar1);
  FUN_001021cd(uVar2,uVar4,uVar3);
  FUN_0010220a(local_38,0);
  FUN_0010218e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_00101c42(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ff4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102da5(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102bcd(void)

{
  return;
}




void FUN_00101449(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018d8(local_58);
  local_5c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_5c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_5c = rand();
    local_5c = local_5c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
                    /* try { // try from 001014cf to 0010150c has its CatchHandler @ 00101558 */
  FUN_00101990(local_58,&local_5c);
  FUN_00101990(local_58,&local_5c);
  FUN_00101990(local_58,&local_5c);
  FUN_001019ca(local_38,local_58);
                    /* try { // try from 00101514 to 00101518 has its CatchHandler @ 00101543 */
  FUN_001023b6(local_38);
  FUN_001018f8(local_38);
  FUN_001018f8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e41(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010207e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e42(param_2);
  uVar2 = FUN_00101b44(param_1);
  FUN_00101b90(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00102b57(void)

{
  return 0;
}




void FUN_00101862(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101fb2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fa0(param_2);
  FUN_00101f76(param_1,uVar1);
  FUN_00101842(param_1);
  return;
}




void FUN_00102240(long param_1)

{
  FUN_0010231e(param_1 + 0x10);
  return;
}




void FUN_00102274(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010218e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001020fd(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102c46(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




long * FUN_00102630(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_0010222c(void)

{
  return;
}




void FUN_00102776(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102bd8(void)

{
  return;
}




void FUN_001019ca(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101c42(param_2);
  FUN_00101bf1(&local_21,uVar1);
  FUN_00101c54(param_1,&local_21);
  FUN_00101944(&local_21);
  uVar1 = FUN_00101cdc(param_2);
  uVar2 = FUN_00101c8c(param_2);
                    /* try { // try from 00101a56 to 00101a5a has its CatchHandler @ 00101a5d */
  FUN_00101d28(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020ea(void)

{
  return;
}




void FUN_00102154(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022c9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102675(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102905(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102eb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102e7f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102879(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102b96(void)

{
  return;
}




void FUN_00101944(undefined8 param_1)

{
  FUN_00101ab6(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




void FUN_00102654(undefined8 *param_1)

{
  FUN_00101d96(*param_1);
  return;
}




void FUN_001025d2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101b44(param_1);
  FUN_00102630(&local_18);
  FUN_00102654(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e24(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101f1e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102bb7(void)

{
  return;
}




void FUN_00102851(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101a96(undefined8 param_1)

{
  FUN_00101d86(param_1);
  return;
}




void FUN_00101d96(long param_1)

{
  FUN_001020cc(param_1 + 0x10);
  return;
}




undefined8 FUN_001022c9(undefined8 param_1)

{
  return param_1;
}




void FUN_00102518(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)FUN_001025d2(param_1);
  iVar1 = *piVar2;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00102675("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_001026cd(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010220a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102721(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102c3b(void)

{
  return;
}




void FUN_00101ab6(void)

{
  return;
}




void FUN_001026cd(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001027cc(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102bc2(void)

{
  return;
}




void FUN_00102c25(void)

{
  return;
}




void FUN_001028a4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fa0(param_2);
  FUN_00101fb2(param_1,uVar1);
  return;
}




undefined8 FUN_0010182c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102262(undefined8 param_1)

{
  return param_1;
}




void FUN_00101679(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018d8(local_58);
  local_5c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_5c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_5c = rand();
    local_5c = local_5c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
                    /* try { // try from 001016ff to 0010173c has its CatchHandler @ 00101788 */
  FUN_00101990(local_58,&local_5c);
  FUN_00101990(local_58,&local_5c);
  FUN_00101990(local_58,&local_5c);
  FUN_001019ca(local_38,local_58);
                    /* try { // try from 00101744 to 00101748 has its CatchHandler @ 00101773 */
  FUN_00102518(local_38);
  FUN_001018f8(local_38);
  FUN_001018f8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_00102038(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001020cc(undefined8 param_1)

{
  FUN_00102262(param_1);
  return;
}




void FUN_00102130(undefined8 param_1)

{
  FUN_0010229b(param_1,1);
  return;
}




void FUN_00102bf9(void)

{
  return;
}




void FUN_00102bee(void)

{
  return;
}



