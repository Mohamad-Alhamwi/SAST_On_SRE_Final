
void FUN_0010188c(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ab4(local_58);
  local_60 = (undefined *)0x0;
                    /* try { // try from 001018c1 to 0010191c has its CatchHandler @ 00101968 */
  local_60 = (undefined *)operator_new__(100);
  *local_60 = 0;
  FUN_00101b6c(local_58,&local_60);
  FUN_00101b6c(local_58,&local_60);
  FUN_00101b6c(local_58,&local_60);
  FUN_00101ba6(local_38,local_58);
                    /* try { // try from 00101924 to 00101928 has its CatchHandler @ 00101953 */
  FUN_00101577(local_38);
  FUN_00101ad4(local_38);
  FUN_00101ad4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00101de4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020f0(param_2);
  FUN_00102102(param_1,uVar1);
  return;
}




void FUN_001014c9(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101626(param_1);
  __dest = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(__dest,local_78,100);
  *(undefined *)((long)__dest + 99) = 0;
  FUN_001024d8(__dest);
  if (__dest != (void *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001023e9(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a74(undefined8 param_1)

{
  FUN_00101b20(param_1);
  return;
}




void FUN_00102604(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001029ba(void)

{
  return 0;
}




void FUN_00102a9e(void)

{
  return;
}




bool FUN_00102bad(pthread_t *param_1)

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




void FUN_00101af4(undefined8 param_1)

{
  FUN_00101c72(param_1);
  FUN_00101a1e(param_1);
  return;
}




void FUN_001026b4(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102a93(void)

{
  return;
}




void FUN_00102a67(void)

{
  return;
}




void FUN_001022c0(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010222f(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_00101e6c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102144(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c92(void)

{
  return;
}




undefined8 FUN_00101e1c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102144(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102584(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001024d8(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f91(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fa4(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010206e(param_1,1);
  return;
}




undefined8 FUN_00101fa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102262(param_1);
  uVar2 = FUN_00101f26(param_1);
  FUN_00102286(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f91(param_2);
  uVar4 = FUN_00101734(uVar1);
  FUN_001022ff(uVar2,uVar4,uVar3);
  FUN_0010233c(local_38,0);
  FUN_001022c0(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




ulong FUN_001027c8(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001019a2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024d8("Calling good()...");
  FUN_00101992();
  FUN_001024d8("Finished good()");
  FUN_001024d8("Calling bad()...");
  FUN_00101786();
  FUN_001024d8("Finished bad()");
  return 0;
}




void FUN_00102558(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101734(long param_1)

{
  FUN_00101756(param_1 + 0x10);
  return;
}




void FUN_00102394(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001029f9(void)

{
  return;
}




void FUN_00102286(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023e9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001022ff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f91(param_3);
  FUN_001023fc(param_1,param_2,uVar1);
  return;
}




void FUN_00102a88(void)

{
  return;
}




void FUN_00102aa9(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102a0f(void)

{
  return;
}




void FUN_00102144(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 * FUN_00102188(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010235e(void)

{
  return;
}




void FUN_00101756(undefined8 param_1)

{
  FUN_00101774(param_1);
  return;
}




void FUN_00102a1a(void)

{
  return;
}




void FUN_00102cc3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102098(undefined8 param_1,undefined8 param_2)

{
  FUN_001020c6(param_1,param_2);
  return param_1;
}




void FUN_00102ca4(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001025ae(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101d81(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102098(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101716(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a51(void)

{
  return;
}




void FUN_001026dc(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102a46(void)

{
  return;
}




void FUN_00101577(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101626(param_1);
  __dest = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(__dest,local_78,100);
  *(undefined *)((long)__dest + 99) = 0;
  FUN_001024d8(__dest);
  if (__dest != (void *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102162(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021ac(&local_18);
    FUN_001021ce(local_10,uVar2);
    FUN_00102188(&local_18);
  }
  return;
}




void FUN_00102372(long param_1)

{
  FUN_00102440(param_1 + 0x10);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ee8)();
  return;
}




void FUN_00102d10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102a5c(void)

{
  return;
}




void FUN_00102735(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001020f0(undefined8 param_1)

{
  return param_1;
}




void FUN_001023fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f91(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a07(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00101dd2(undefined8 param_1)

{
  return param_1;
}




void FUN_0010222f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102394(param_1,param_2,param_3);
  return;
}




void FUN_00102a72(void)

{
  return;
}




undefined8 FUN_00101684(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101716(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long * FUN_001016d0(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102ce2(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101786(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ab4(local_58);
  local_60 = (undefined *)0x0;
                    /* try { // try from 001017bb to 00101816 has its CatchHandler @ 00101862 */
  local_60 = (undefined *)operator_new__(0x32);
  *local_60 = 0;
  FUN_00101b6c(local_58,&local_60);
  FUN_00101b6c(local_58,&local_60);
  FUN_00101b6c(local_58,&local_60);
  FUN_00101ba6(local_38,local_58);
                    /* try { // try from 0010181e to 00101822 has its CatchHandler @ 0010184d */
  FUN_001014c9(local_38);
  FUN_00101ad4(local_38);
  FUN_00101ad4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102707(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001024ae(undefined8 param_1)

{
  return param_1;
}




void FUN_00102768(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101a07(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_0010233c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102a04(void)

{
  return;
}




undefined8 FUN_00101774(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101684(param_1);
  FUN_00101d20(param_1,uVar1,param_2);
  return;
}




void FUN_00101c72(undefined8 param_1)

{
  FUN_00101f16(param_1);
  return;
}




void FUN_00101ad4(undefined8 param_1)

{
  FUN_00101b40(param_1);
  return;
}




void FUN_0010265a(undefined4 param_1)

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




void FUN_00101f38(undefined8 param_1,undefined8 param_2)

{
  FUN_0010221c(param_1,param_2);
  return;
}




void FUN_001029e3(void)

{
  return;
}




undefined8 FUN_00102c08(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101b40(undefined8 param_1)

{
  FUN_00101ca2(param_1);
  FUN_00101a74(param_1);
  return;
}




void FUN_00102102(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020f0(param_2);
  FUN_001020c6(param_1,uVar1);
  FUN_00101a1e(param_1);
  return;
}




undefined8 FUN_00102c2b(undefined8 *param_1)

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




undefined8 FUN_001024c0(void)

{
  return 0x555555555555555;
}




void FUN_00101a3e(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101ab4(undefined8 param_1)

{
  FUN_00101a94(param_1);
  return;
}




undefined8 FUN_00101f91(undefined8 param_1)

{
  return param_1;
}




void FUN_00102262(undefined8 param_1)

{
  FUN_001023bb(param_1,1);
  return;
}




undefined8 FUN_001029ab(void)

{
  return 1;
}




void FUN_00102a25(void)

{
  return;
}




void FUN_00102a3b(void)

{
  return;
}




ulong FUN_001028cc(long param_1,ulong param_2,long param_3)

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




int FUN_001029c9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001021ce(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f91(param_2);
  uVar2 = FUN_00101684(param_1);
  FUN_00101d20(param_1,uVar2,uVar1);
  return;
}




void FUN_001023bb(undefined8 param_1,undefined8 param_2)

{
  FUN_0010245e(param_1,param_2,0);
  return;
}




void FUN_00102a7d(void)

{
  return;
}




void FUN_00101f62(undefined8 param_1,undefined8 param_2)

{
  FUN_0010222f(param_1,param_2,1);
  return;
}




undefined8 FUN_00101f26(undefined8 param_1)

{
  return param_1;
}




void FUN_00101626(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101684(param_1);
  FUN_001016d0(&local_18);
  FUN_001016f4(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016f4(undefined8 *param_1)

{
  FUN_00101734(*param_1);
  return;
}




void FUN_00102440(undefined8 param_1)

{
  FUN_001024ae(param_1);
  return;
}




void FUN_001021ac(undefined8 *param_1)

{
  FUN_00102372(*param_1);
  return;
}




void FUN_00102a30(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00101ca2(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101734(local_20);
    uVar3 = FUN_00101f26(param_1);
    FUN_00101f38(uVar3,uVar2);
    FUN_00101f62(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101f16(void)

{
  return;
}




void FUN_00101b20(undefined8 param_1)

{
  FUN_00101c92(param_1);
  return;
}




void FUN_001020c6(undefined8 param_1,undefined8 param_2)

{
  FUN_0010235e(param_1,param_2);
  return;
}




void FUN_0010262f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010206e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102162(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_0010245e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024c0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001025d9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102ae0(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102aa9,local_18);
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




void FUN_0010221c(void)

{
  return;
}




void FUN_00101ba6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dd2(param_2);
  FUN_00101d81(&local_21,uVar1);
  FUN_00101de4(param_1,&local_21);
  FUN_00101b20(&local_21);
  uVar1 = FUN_00101e6c(param_2);
  uVar2 = FUN_00101e1c(param_2);
                    /* try { // try from 00101c32 to 00101c36 has its CatchHandler @ 00101c39 */
  FUN_00101eb8(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d80(void)

{
  return;
}




void FUN_00101992(void)

{
  FUN_0010188c();
  return;
}




void FUN_00101a1e(undefined8 param_1)

{
  FUN_00101a3e(param_1);
  return;
}




void FUN_00101a94(undefined8 param_1)

{
  FUN_00101af4(param_1);
  return;
}




void FUN_00102530(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001024fe(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001029ee(void)

{
  return;
}



