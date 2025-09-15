
void FUN_001016aa(void)

{
  long in_FS_OFFSET;
  char *local_e0;
  size_t local_d8;
  char *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d5e(local_c8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_e0 = local_88;
  local_d8 = strlen(local_e0);
  local_d0 = getenv("ADD");
  if (local_d0 != (char *)0x0) {
    strncat(local_e0 + local_d8,local_d0,99 - local_d8);
  }
                    /* try { // try from 001017c3 to 00101812 has its CatchHandler @ 0010186a */
  FUN_00101e16(local_c8,&local_e0);
  FUN_00101e16(local_c8,&local_e0);
  FUN_00101e16(local_c8,&local_e0);
  FUN_00101e50(local_a8,local_c8);
                    /* try { // try from 0010181d to 00101821 has its CatchHandler @ 00101852 */
  FUN_001014a9(local_a8);
  FUN_00101d7e(local_a8);
  FUN_00101d7e(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




undefined8 FUN_0010202b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102342(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001014a9(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010154a(param_1);
  printf((char *)*puVar1);
  return;
}




void FUN_0010263e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101cc8(undefined8 param_1)

{
  FUN_00101ce8(param_1);
  return;
}




void FUN_00102858(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00102b76(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010409c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d32(void)

{
  return;
}




void FUN_00102d53(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d5e(undefined8 param_1)

{
  FUN_00101d3e(param_1);
  return;
}




void FUN_001028d9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102d27(void)

{
  return;
}




void FUN_00102cfb(void)

{
  return;
}




void FUN_0010250c(undefined8 param_1)

{
  FUN_00102665(param_1,1);
  return;
}




void FUN_0010208e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010239a(param_2);
  FUN_001023ac(param_1,uVar1);
  return;
}




void FUN_00101e50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010207c(param_2);
  FUN_0010202b(&local_21,uVar1);
  FUN_0010208e(param_1,&local_21);
  FUN_00101dca(&local_21);
  uVar1 = FUN_00102116(param_2);
  uVar2 = FUN_001020c6(param_2);
                    /* try { // try from 00101edc to 00101ee0 has its CatchHandler @ 00101ee3 */
  FUN_00102162(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010207c(undefined8 param_1)

{
  return param_1;
}




void FUN_001027da(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102758(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f3c(void)

{
  return;
}




void FUN_0010220c(undefined8 param_1,undefined8 param_2)

{
  FUN_001024d9(param_1,param_2,1);
  return;
}




void FUN_001029df(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101a47(void)

{
  long in_FS_OFFSET;
  char *local_e0;
  size_t local_d8;
  char *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d5e(local_c8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_e0 = local_88;
  local_d8 = strlen(local_e0);
  local_d0 = getenv("ADD");
  if (local_d0 != (char *)0x0) {
    strncat(local_e0 + local_d8,local_d0,99 - local_d8);
  }
                    /* try { // try from 00101b60 to 00101baf has its CatchHandler @ 00101c07 */
  FUN_00101e16(local_c8,&local_e0);
  FUN_00101e16(local_c8,&local_e0);
  FUN_00101e16(local_c8,&local_e0);
  FUN_00101e50(local_a8,local_c8);
                    /* try { // try from 00101bba to 00101bbe has its CatchHandler @ 00101bef */
  FUN_00101517(local_a8);
  FUN_00101d7e(local_a8);
  FUN_00101d7e(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001027a8(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010163a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102608(void)

{
  return;
}




void FUN_00102c8d(void)

{
  return;
}




void FUN_001024d9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010263e(param_1,param_2,param_3);
  return;
}




void FUN_00102530(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102693(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102d1c(void)

{
  return;
}




void FUN_00102d3d(void)

{
  return;
}




void FUN_00102ca3(void)

{
  return;
}




undefined8 FUN_0010239a(undefined8 param_1)

{
  return param_1;
}




void FUN_001023ee(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001025a9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010223b(param_3);
  FUN_001026a6(param_1,param_2,uVar1);
  return;
}




void FUN_00101658(long param_1)

{
  FUN_0010167a(param_1 + 0x10);
  return;
}




void FUN_00102cae(void)

{
  return;
}




undefined8 FUN_00102ed5(undefined8 *param_1)

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




undefined8 FUN_0010224e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010250c(param_1);
  uVar2 = FUN_001021d0(param_1);
  FUN_00102530(local_38,uVar2,uVar1);
  uVar3 = FUN_0010223b(param_2);
  uVar4 = FUN_00101658(uVar1);
  FUN_001025a9(uVar2,uVar4,uVar3);
  FUN_001025e6(local_38,0);
  FUN_0010256a(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_00102eb2(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102802(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101658(local_20);
    uVar3 = FUN_001021d0(param_1);
    FUN_001021e2(uVar3,uVar2);
    FUN_0010220c(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101618(undefined8 *param_1)

{
  FUN_00101658(*param_1);
  return;
}




void FUN_00102ce5(void)

{
  return;
}




void FUN_00102904(undefined4 param_1)

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




void FUN_00102cda(void)

{
  return;
}




void FUN_001014e0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010154a(param_1);
  printf((char *)*puVar1);
  return;
}




undefined8 FUN_001020c6(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023ee(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001025e6(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ef0)();
  return;
}




void FUN_00102f6d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_001013f0();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00102cf0(void)

{
  return;
}




void FUN_00102986(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102342(undefined8 param_1,undefined8 param_2)

{
  FUN_00102370(param_1,param_2);
  return param_1;
}




void FUN_00102665(undefined8 param_1,undefined8 param_2)

{
  FUN_00102708(param_1,param_2,0);
  return;
}




void FUN_00101fca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_0010223b(param_3);
  p_Var2 = (_List_node_base *)FUN_0010224e(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102318(param_1,1);
  return;
}




void FUN_00102478(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010223b(param_2);
  uVar2 = FUN_001015a8(param_1);
  FUN_00101fca(param_1,uVar2,uVar1);
  return;
}




void FUN_00102d06(void)

{
  return;
}




void FUN_0010154a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001015a8(param_1);
  FUN_001015f4(&local_18);
  FUN_00101618(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001015a8(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010163a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f4e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101698(undefined8 param_1)

{
  return param_1;
}




void FUN_0010295e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001026ea(undefined8 param_1)

{
  FUN_00102758(param_1);
  return;
}




void FUN_001029b1(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c37(void)

{
  FUN_0010189a();
  FUN_00101a47();
  return;
}




void FUN_0010256a(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001024d9(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102c98(void)

{
  return;
}




void FUN_0010167a(undefined8 param_1)

{
  FUN_00101698(param_1);
  return;
}




void FUN_00101dca(undefined8 param_1)

{
  FUN_00101f3c(param_1);
  return;
}




void FUN_00101e16(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001015a8(param_1);
  FUN_00101fca(param_1,uVar1,param_2);
  return;
}




void FUN_00101d3e(undefined8 param_1)

{
  FUN_00101d9e(param_1);
  return;
}




void FUN_001028ae(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001021c0(void)

{
  return;
}




undefined8 FUN_00102c64(void)

{
  return 0;
}




undefined8 FUN_00102d8a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102d53,local_18);
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




void FUN_00101d9e(undefined8 param_1)

{
  FUN_00101f1c(param_1);
  FUN_00101cc8(param_1);
  return;
}




void FUN_00102370(undefined8 param_1,undefined8 param_2)

{
  FUN_00102608(param_1,param_2);
  return;
}




bool FUN_00102e57(pthread_t *param_1)

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




void FUN_00102708(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010276a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00101cb1(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101d1e(undefined8 param_1)

{
  FUN_00101dca(param_1);
  return;
}




void FUN_001021e2(undefined8 param_1,undefined8 param_2)

{
  FUN_001024c6(param_1,param_2);
  return;
}




void FUN_001024c6(void)

{
  return;
}




ulong FUN_00102a72(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00104094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102cb9(void)

{
  return;
}




void FUN_00102ccf(void)

{
  return;
}




void FUN_00102a12(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00102c55(void)

{
  return 1;
}




undefined8 * FUN_00102432(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010261c(long param_1)

{
  FUN_001026ea(param_1 + 0x10);
  return;
}




void FUN_00102d11(void)

{
  return;
}




undefined8 FUN_001021d0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102162(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010240c(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102456(&local_18);
    FUN_00102478(local_10,uVar2);
    FUN_00102432(&local_18);
  }
  return;
}




void FUN_00101517(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010154a(param_1);
  puts((char *)*puVar1);
  return;
}




long * FUN_001015f4(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00102693(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010240c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102cc4(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_00101f1c(undefined8 param_1)

{
  FUN_001021c0(param_1);
  return;
}




undefined8 FUN_00102116(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023ee(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d7e(undefined8 param_1)

{
  FUN_00101dea(param_1);
  return;
}




void FUN_00102318(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102883(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102fc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_0010223b(undefined8 param_1)

{
  return param_1;
}




void FUN_001023ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010239a(param_2);
  FUN_00102370(param_1,uVar1);
  FUN_00101cc8(param_1);
  return;
}




void FUN_001026a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0010223b(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101cb1(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010282e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102d48(void)

{
  return;
}




void FUN_00102456(undefined8 *param_1)

{
  FUN_0010261c(*param_1);
  return;
}




void FUN_00101dea(undefined8 param_1)

{
  FUN_00101f4c(param_1);
  FUN_00101d1e(param_1);
  return;
}




void FUN_00102f8c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010189a(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d5e(local_c8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_d0 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
                    /* try { // try from 00101970 to 001019bf has its CatchHandler @ 00101a17 */
  FUN_00101e16(local_c8,&local_d0);
  FUN_00101e16(local_c8,&local_d0);
  FUN_00101e16(local_c8,&local_d0);
  FUN_00101e50(local_a8,local_c8);
                    /* try { // try from 001019ca to 001019ce has its CatchHandler @ 001019ff */
  FUN_001014e0(local_a8);
  FUN_00101d7e(local_a8);
  FUN_00101d7e(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c4c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102782("Calling good()...");
  FUN_00101c37();
  FUN_00102782("Finished good()");
  FUN_00102782("Calling bad()...");
  FUN_001016aa();
  FUN_00102782("Finished bad()");
  return 0;
}




void FUN_00103030(void)

{
  return;
}




void FUN_00101ce8(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102782(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010276a(void)

{
  return 0x555555555555555;
}




int FUN_00102c73(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}



