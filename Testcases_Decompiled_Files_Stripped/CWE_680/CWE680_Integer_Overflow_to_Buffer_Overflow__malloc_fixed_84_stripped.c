
void FUN_001017fc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int FUN_00101bec(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c11(void)

{
  return;
}




void FUN_00101c1c(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00104020 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101370();
    DAT_00104020 = 1;
    return;
  }
  return;
}




void FUN_00101450(int *param_1)

{
  undefined4 *__ptr;
  ulong local_18;
  
  __ptr = (undefined4 *)malloc((long)*param_1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)*param_1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_00101753(*__ptr);
  free(__ptr);
  return;
}




void FUN_00101c7f(void)

{
  return;
}




undefined8 FUN_00101e4e(undefined8 *param_1)

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




void FUN_00101c69(void)

{
  return;
}




void FUN_00101958(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001015e5(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016fb("Calling good()...");
  FUN_001015d5();
  FUN_001016fb("Finished good()");
  FUN_001016fb("Calling bad()...");
  FUN_001014db();
  FUN_001016fb("Finished bad()");
  return 0;
}




void FUN_00101827(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




ulong FUN_001019eb(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c74(void)

{
  return;
}




void FUN_00101f30(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001018d7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c32(void)

{
  return;
}




void FUN_00101721(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101e2b(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00101aef(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ca0(void)

{
  return;
}




void FUN_0010164a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *param_1 = 0x40000001;
  return;
}




void FUN_001015d5(void)

{
  FUN_00101558();
  return;
}




void FUN_001014db(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 00101506 to 0010150a has its CatchHandler @ 0010152f */
  FUN_0010164a(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101670(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00101c27(void)

{
  return;
}




void FUN_00101c95(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void FUN_001016fb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101bce(void)

{
  return 1;
}




void FUN_00101c06(void)

{
  return;
}




void FUN_0010142a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *param_1 = 0x14;
  return;
}




void FUN_001017a7(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010187d(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




bool FUN_00101dd0(pthread_t *param_1)

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




undefined8 FUN_00101bdd(void)

{
  return 0;
}




void FUN_00101c5e(void)

{
  return;
}




undefined8 FUN_00101d03(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101ccc,local_18);
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




void FUN_00101ec7(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101c3d(void)

{
  return;
}




void FUN_00101ee6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101753(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001017d1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010192a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c48(void)

{
  return;
}




void FUN_00101c53(void)

{
  return;
}




void FUN_00101c8a(void)

{
  return;
}




void FUN_001018ff(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101cab(void)

{
  return;
}




void FUN_00101cb6(void)

{
  return;
}




void FUN_00101f05(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101852(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f10)();
  return;
}




void FUN_00101670(int *param_1)

{
  undefined4 *__ptr;
  ulong local_18;
  
  __ptr = (undefined4 *)malloc((long)*param_1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)*param_1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_00101753(*__ptr);
  free(__ptr);
  return;
}




void FUN_0010177b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cc1(void)

{
  return;
}




void FUN_00101fa0(void)

{
  return;
}




void FUN_00101558(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 00101583 to 00101587 has its CatchHandler @ 001015ac */
  FUN_0010142a(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101450(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00101ccc(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010198b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}



