
void FUN_00101f50(undefined8 param_1,undefined8 param_2)

{
  FUN_00102234(param_1,param_2);
  return;
}




void FUN_0010177c(undefined8 param_1)

{
  FUN_0010179a(param_1);
  return;
}




void FUN_00101b84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016aa(param_1);
  FUN_00101d38(param_1,uVar1,param_2);
  return;
}




void FUN_00102376(void)

{
  return;
}




void FUN_00101caa(void)

{
  return;
}




void FUN_00102a06(void)

{
  return;
}




void FUN_001020de(undefined8 param_1,undefined8 param_2)

{
  FUN_00102376(param_1,param_2);
  return;
}




void FUN_00102a95(void)

{
  return;
}




void FUN_00102cfa(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_0010217a(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102ab6(void)

{
  return;
}




void FUN_0010171a(undefined8 *param_1)

{
  FUN_0010175a(*param_1);
  return;
}




void FUN_00102780(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001023ac(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010227a(undefined8 param_1)

{
  FUN_001023d3(param_1,1);
  return;
}




void FUN_0010238a(long param_1)

{
  FUN_00102458(param_1 + 0x10);
  return;
}




void FUN_00101a36(undefined8 param_1)

{
  FUN_00101a56(param_1);
  return;
}




void FUN_00102a74(void)

{
  return;
}




void FUN_00102a48(void)

{
  return;
}




void FUN_001022d8(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102247(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_001024d8(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00102c43(undefined8 *param_1)

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




undefined8 FUN_00101fa9(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a69(void)

{
  return;
}




undefined8 FUN_00101e84(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010215c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_001029e1(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_0010274d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101a56(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




ulong FUN_001027e0(long param_1,ulong param_2,long param_3)

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




void FUN_001025c6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010261c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001029c3(void)

{
  return 1;
}




void FUN_00101489(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  ulong local_348;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010164c(param_1);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    puVar1[local_348] = local_338[local_348];
  }
  FUN_001025f1(*puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete__(puVar1);
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
    FUN_001013d0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010217a(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021c4(&local_18);
    FUN_001021e6(local_10,uVar2);
    FUN_001021a0(&local_18);
  }
  return;
}




void FUN_0010175a(long param_1)

{
  FUN_0010177c(param_1 + 0x10);
  return;
}




void FUN_00101aac(undefined8 param_1)

{
  FUN_00101b0c(param_1);
  return;
}




void FUN_00102516(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102a7f(void)

{
  return;
}




void FUN_00102317(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fa9(param_3);
  FUN_00102414(param_1,param_2,uVar1);
  return;
}




void FUN_00101a8c(undefined8 param_1)

{
  FUN_00101b38(param_1);
  return;
}




undefined8 FUN_00101e34(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010215c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ac1(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101cba(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010175a(local_20);
    uVar3 = FUN_00101f3e(param_1);
    FUN_00101f50(uVar3,uVar2);
    FUN_00101f7a(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_001023d3(undefined8 param_1,undefined8 param_2)

{
  FUN_00102476(param_1,param_2,0);
  return;
}




void FUN_00101b58(undefined8 param_1)

{
  FUN_00101cba(param_1);
  FUN_00101a8c(param_1);
  return;
}




undefined8 FUN_001029d2(void)

{
  return 0;
}




void FUN_00101b38(undefined8 param_1)

{
  FUN_00101caa(param_1);
  return;
}




void FUN_00101b0c(undefined8 param_1)

{
  FUN_00101c8a(param_1);
  FUN_00101a36(param_1);
  return;
}




void FUN_00101c8a(undefined8 param_1)

{
  FUN_00101f2e(param_1);
  return;
}




long * FUN_001016f6(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001018ab(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101acc(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001018e0 to 00101934 has its CatchHandler @ 00101980 */
  local_60 = operator_new__(800);
  FUN_00101b84(local_58,&local_60);
  FUN_00101b84(local_58,&local_60);
  FUN_00101b84(local_58,&local_60);
  FUN_00101bbe(local_38,local_58);
                    /* try { // try from 0010193c to 00101940 has its CatchHandler @ 0010196b */
  FUN_0010156a(local_38);
  FUN_00101aec(local_38);
  FUN_00101aec(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010164c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016aa(param_1);
  FUN_001016f6(&local_18);
  FUN_0010171a(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00102bc5(pthread_t *param_1)

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




void FUN_00102570(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a11(void)

{
  return;
}




long FUN_00102354(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001026f4(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001017ac(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101acc(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001017e1 to 00101835 has its CatchHandler @ 00101881 */
  local_60 = operator_new__(400);
  FUN_00101b84(local_58,&local_60);
  FUN_00101b84(local_58,&local_60);
  FUN_00101b84(local_58,&local_60);
  FUN_00101bbe(local_38,local_58);
                    /* try { // try from 0010183d to 00101841 has its CatchHandler @ 0010186c */
  FUN_00101489(local_38);
  FUN_00101aec(local_38);
  FUN_00101aec(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_0010173c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101d99(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020b0(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101dea(undefined8 param_1)

{
  return param_1;
}




void FUN_00101acc(undefined8 param_1)

{
  FUN_00101aac(param_1);
  return;
}




undefined8 FUN_00101f3e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102af8(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ac1,local_18);
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




void FUN_00102a32(void)

{
  return;
}




undefined8 FUN_00102c20(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101fbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010227a(param_1);
  uVar2 = FUN_00101f3e(param_1);
  FUN_0010229e(local_38,uVar2,uVar1);
  uVar3 = FUN_00101fa9(param_2);
  uVar4 = FUN_0010175a(uVar1);
  FUN_00102317(uVar2,uVar4,uVar3);
  FUN_00102354(local_38,0);
  FUN_001022d8(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




ulong FUN_001028e4(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001016aa(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010173c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f2e(void)

{
  return;
}




void FUN_001021e6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101fa9(param_2);
  uVar2 = FUN_001016aa(param_1);
  FUN_00101d38(param_1,uVar2,uVar1);
  return;
}




void FUN_00102247(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001023ac(param_1,param_2,param_3);
  return;
}




void FUN_0010215c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102aab(void)

{
  return;
}




void FUN_00102458(undefined8 param_1)

{
  FUN_001024c6(param_1);
  return;
}




void FUN_00102da0(void)

{
  return;
}




void FUN_001021c4(undefined8 *param_1)

{
  FUN_0010238a(*param_1);
  return;
}




void FUN_0010259c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102a3d(void)

{
  return;
}




void FUN_001019aa(void)

{
  FUN_001018ab();
  return;
}




undefined8 FUN_001020b0(undefined8 param_1,undefined8 param_2)

{
  FUN_001020de(param_1,param_2);
  return param_1;
}




void FUN_0010211a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102108(param_2);
  FUN_001020de(param_1,uVar1);
  FUN_00101a36(param_1);
  return;
}




undefined8 FUN_001024c6(undefined8 param_1)

{
  return param_1;
}




void FUN_0010271f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102cdb(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102cbc(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102d30(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102672(undefined4 param_1)

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




void FUN_001029fb(void)

{
  return;
}




undefined8 FUN_0010179a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102476(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024d8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101fa9(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a1f(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101fa9(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fbc(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102086(param_1,1);
  return;
}




void FUN_00101dfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102108(param_2);
  FUN_0010211a(param_1,uVar1);
  return;
}




void FUN_00102a1c(void)

{
  return;
}




void FUN_00102647(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001019ba(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024f0("Calling good()...");
  FUN_001019aa();
  FUN_001024f0("Finished good()");
  FUN_001024f0("Calling bad()...");
  FUN_001017ac();
  FUN_001024f0("Finished bad()");
  return 0;
}




void FUN_00101bbe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dea(param_2);
  FUN_00101d99(&local_21,uVar1);
  FUN_00101dfc(param_1,&local_21);
  FUN_00101b38(&local_21);
  uVar1 = FUN_00101e84(param_2);
  uVar2 = FUN_00101e34(param_2);
                    /* try { // try from 00101c4a to 00101c4e has its CatchHandler @ 00101c51 */
  FUN_00101ed0(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010229e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102401(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00102401(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_001021a0(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102548(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102aa0(void)

{
  return;
}




undefined8 FUN_00101a1f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001024f0(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001025f1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a27(void)

{
  return;
}




void FUN_00102a8a(void)

{
  return;
}




void FUN_001026cc(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101aec(undefined8 param_1)

{
  FUN_00101b58(param_1);
  return;
}




void FUN_0010156a(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  ulong local_348;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010164c(param_1);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    puVar1[local_348] = local_338[local_348];
  }
  FUN_001025f1(*puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102234(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00101f7a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102247(param_1,param_2,1);
  return;
}




void FUN_00102086(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102108(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a5e(void)

{
  return;
}




void FUN_00102a53(void)

{
  return;
}



