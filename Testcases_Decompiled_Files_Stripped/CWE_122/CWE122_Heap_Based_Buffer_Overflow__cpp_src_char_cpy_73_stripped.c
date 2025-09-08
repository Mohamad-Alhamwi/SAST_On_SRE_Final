
void FUN_00101a68(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_0010162c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010168a(param_1);
  FUN_001016d6(&local_18);
  FUN_001016fa(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f50(undefined8 param_1)

{
  return param_1;
}




void FUN_001016fa(undefined8 *param_1)

{
  FUN_0010173a(*param_1);
  return;
}




undefined8 FUN_001024ea(void)

{
  return 0x555555555555555;
}




void FUN_00101b4a(undefined8 param_1)

{
  FUN_00101cbc(param_1);
  return;
}




void FUN_00102731(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102a2e(void)

{
  return;
}




undefined8 FUN_00102c55(undefined8 *param_1)

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




void FUN_00101c9c(undefined8 param_1)

{
  FUN_00101f40(param_1);
  return;
}




ulong FUN_001027f2(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102c32(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102ac8(void)

{
  return;
}




void FUN_001023be(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101f8c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102259(param_1,param_2,1);
  return;
}




void FUN_00101e0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010211a(param_2);
  FUN_0010212c(param_1,uVar1);
  return;
}




void FUN_00101f62(undefined8 param_1,undefined8 param_2)

{
  FUN_00102246(param_1,param_2);
  return;
}




void FUN_00102684(undefined4 param_1)

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




void FUN_001025d8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101e96(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010216e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010212c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010211a(param_2);
  FUN_001020f0(param_1,uVar1);
  FUN_00101a48(param_1);
  return;
}




void FUN_00102a0d(void)

{
  return;
}




void FUN_00101abe(undefined8 param_1)

{
  FUN_00101b1e(param_1);
  return;
}




void FUN_00102659(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102ced(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001019bc(void)

{
  FUN_001018a4();
  return;
}




void FUN_00102488(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024ea(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102a5a(void)

{
  return;
}




void FUN_0010239c(long param_1)

{
  FUN_0010246a(param_1 + 0x10);
  return;
}




void FUN_001023e5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102488(param_1,param_2,0);
  return;
}




bool FUN_00102bd7(pthread_t *param_1)

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




void FUN_00102d40(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102a70(void)

{
  return;
}




void FUN_00102246(void)

{
  return;
}




void FUN_0010228c(undefined8 param_1)

{
  FUN_001023e5(param_1,1);
  return;
}




void FUN_00102426(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101fbb(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a31(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_001019cc(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102502("Calling good()...");
  FUN_001019bc();
  FUN_00102502("Finished good()");
  FUN_00102502("Calling bad()...");
  FUN_0010178c();
  FUN_00102502("Finished bad()");
  return 0;
}




void FUN_00102a7b(void)

{
  return;
}




undefined8 FUN_0010218c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001026de(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101ee2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010218c(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021d6(&local_18);
    FUN_001021f8(local_10,uVar2);
    FUN_001021b2(&local_18);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ee8)();
  return;
}




void FUN_001018a4(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ade(local_58);
                    /* try { // try from 001018d1 to 00101946 has its CatchHandler @ 00101992 */
  local_60 = operator_new__(100);
  memset(local_60,0x41,0x31);
  *(undefined *)((long)local_60 + 0x31) = 0;
  FUN_00101b96(local_58,&local_60);
  FUN_00101b96(local_58,&local_60);
  FUN_00101b96(local_58,&local_60);
  FUN_00101bd0(local_38,local_58);
                    /* try { // try from 0010194e to 00101952 has its CatchHandler @ 0010197d */
  FUN_0010157a(local_38);
  FUN_00101afe(local_38);
  FUN_00101afe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ab2(void)

{
  return;
}




ulong FUN_001028f6(long param_1,ulong param_2,long param_3)

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




void FUN_00102aa7(void)

{
  return;
}




void FUN_0010171c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101fbb(undefined8 param_1)

{
  return param_1;
}




void FUN_0010157a(undefined8 param_1)

{
  char *__src;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010162c(param_1);
  __src = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcpy(local_48,__src);
  FUN_00102502(__src);
  if (__src != (char *)0x0) {
    operator_delete__(__src);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d0c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010246a(undefined8 param_1)

{
  FUN_001024d8(param_1);
  return;
}




void FUN_001014c9(undefined8 param_1)

{
  char *__src;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010162c(param_1);
  __src = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcpy(local_48,__src);
  FUN_00102502(__src);
  if (__src != (char *)0x0) {
    operator_delete__(__src);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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




long * FUN_001016d6(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102abd(void)

{
  return;
}




undefined8 FUN_001029e4(void)

{
  return 0;
}




void FUN_001021d6(undefined8 *param_1)

{
  FUN_0010239c(*param_1);
  return;
}




void FUN_00102502(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101f40(void)

{
  return;
}




long FUN_00102366(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102ad3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010175c(undefined8 param_1)

{
  FUN_0010177a(param_1);
  return;
}




undefined8 FUN_0010177a(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00101a48(undefined8 param_1)

{
  FUN_00101a68(param_1);
  return;
}




undefined8 FUN_001029d5(void)

{
  return 1;
}




void FUN_00102582(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




int FUN_001029f3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ade(undefined8 param_1)

{
  FUN_00101abe(param_1);
  return;
}




undefined8 FUN_00102413(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a65(void)

{
  return;
}




undefined8 FUN_00101a31(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101d4a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101fbb(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fce(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102098(param_1,1);
  return;
}




undefined8 FUN_00101dfc(undefined8 param_1)

{
  return param_1;
}




void FUN_00101bd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dfc(param_2);
  FUN_00101dab(&local_21,uVar1);
  FUN_00101e0e(param_1,&local_21);
  FUN_00101b4a(&local_21);
  uVar1 = FUN_00101e96(param_2);
  uVar2 = FUN_00101e46(param_2);
                    /* try { // try from 00101c5c to 00101c60 has its CatchHandler @ 00101c63 */
  FUN_00101ee2(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102792(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001020c2(undefined8 param_1,undefined8 param_2)

{
  FUN_001020f0(param_1,param_2);
  return param_1;
}




void FUN_00102a44(void)

{
  return;
}




void FUN_00101ccc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010173a(local_20);
    uVar3 = FUN_00101f50(param_1);
    FUN_00101f62(uVar3,uVar2);
    FUN_00101f8c(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_001021f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101fbb(param_2);
  uVar2 = FUN_0010168a(param_1);
  FUN_00101d4a(param_1,uVar2,uVar1);
  return;
}




void FUN_001025ae(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101b1e(undefined8 param_1)

{
  FUN_00101c9c(param_1);
  FUN_00101a48(param_1);
  return;
}




void FUN_00101b96(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010168a(param_1);
  FUN_00101d4a(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_0010211a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102388(void)

{
  return;
}




void FUN_00102a23(void)

{
  return;
}




void FUN_00102a86(void)

{
  return;
}




void FUN_00102a9c(void)

{
  return;
}




void FUN_00102a18(void)

{
  return;
}




void FUN_00102a39(void)

{
  return;
}




void FUN_001022ea(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102259(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_001024d8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102b0a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ad3,local_18);
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




void FUN_001020f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102388(param_1,param_2);
  return;
}




void FUN_00102098(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_0010173a(long param_1)

{
  FUN_0010175c(param_1 + 0x10);
  return;
}




void FUN_0010178c(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ade(local_58);
                    /* try { // try from 001017b9 to 0010182e has its CatchHandler @ 0010187a */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  FUN_00101b96(local_58,&local_60);
  FUN_00101b96(local_58,&local_60);
  FUN_00101b96(local_58,&local_60);
  FUN_00101bd0(local_38,local_58);
                    /* try { // try from 00101836 to 0010183a has its CatchHandler @ 00101865 */
  FUN_001014c9(local_38);
  FUN_00101afe(local_38);
  FUN_00101afe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102528(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001022b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102413(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102a91(void)

{
  return;
}




undefined8 FUN_0010168a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010171c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101e46(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010216e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101fce(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010228c(param_1);
  uVar2 = FUN_00101f50(param_1);
  FUN_001022b0(local_38,uVar2,uVar1);
  uVar3 = FUN_00101fbb(param_2);
  uVar4 = FUN_0010173a(uVar1);
  FUN_00102329(uVar2,uVar4,uVar3);
  FUN_00102366(local_38,0);
  FUN_001022ea(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101cbc(void)

{
  return;
}




undefined8 * FUN_001021b2(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010275f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010216e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102259(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001023be(param_1,param_2,param_3);
  return;
}




void FUN_0010255a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102706(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102db0(void)

{
  return;
}




void FUN_00102329(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fbb(param_3);
  FUN_00102426(param_1,param_2,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




undefined8 FUN_00101dab(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020c2(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101a9e(undefined8 param_1)

{
  FUN_00101b4a(param_1);
  return;
}




void FUN_00101afe(undefined8 param_1)

{
  FUN_00101b6a(param_1);
  return;
}




void FUN_00102cce(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101b6a(undefined8 param_1)

{
  FUN_00101ccc(param_1);
  FUN_00101a9e(param_1);
  return;
}




void FUN_0010262e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102603(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a4f(void)

{
  return;
}



